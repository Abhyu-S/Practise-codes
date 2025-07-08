import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler, LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.utils.class_weight import compute_class_weight
from sklearn.metrics import classification_report, confusion_matrix
import warnings
warnings.filterwarnings('ignore')

class NeuralNetwork:
    def __init__(self, layers, learning_rate=0.001, dropout_rate=0.2, 
                 batch_size=32, use_batch_norm=True, patience=10):
        """
        Initialize neural network with multiple hidden layers
        
        Parameters:
        - layers: list of layer sizes [input_size, hidden1, hidden2, ..., output_size]
        - learning_rate: learning rate for gradient descent
        - dropout_rate: dropout probability
        - batch_size: batch size for training
        - use_batch_norm: whether to use batch normalization
        - patience: early stopping patience
        """
        self.layers = layers
        self.learning_rate = learning_rate
        self.dropout_rate = dropout_rate
        self.batch_size = batch_size
        self.use_batch_norm = use_batch_norm
        self.patience = patience
        
        # Initialize weights and biases using Xavier initialization
        self.weights = []
        self.biases = []
        
        for i in range(len(layers) - 1):
            # Xavier initialization to prevent vanishing gradients
            w = np.random.randn(layers[i], layers[i+1]) * np.sqrt(2.0 / layers[i])
            b = np.zeros((1, layers[i+1]))
            self.weights.append(w)
            self.biases.append(b)
        
        # Batch normalization parameters
        if self.use_batch_norm:
            self.bn_gamma = []
            self.bn_beta = []
            self.bn_running_mean = []
            self.bn_running_var = []
            
            for i in range(len(layers) - 2):  # No BN on output layer
                self.bn_gamma.append(np.ones((1, layers[i+1])))
                self.bn_beta.append(np.zeros((1, layers[i+1])))
                self.bn_running_mean.append(np.zeros((1, layers[i+1])))
                self.bn_running_var.append(np.ones((1, layers[i+1])))
        
        # Training history
        self.train_loss_history = []
        self.val_loss_history = []
        self.train_acc_history = []
        self.val_acc_history = []
    
    def relu(self, x):
        """ReLU activation function to prevent vanishing gradients"""
        return np.maximum(0, x)
    
    def relu_derivative(self, x):
        """Derivative of ReLU function"""
        return (x > 0).astype(float)
    
    def leaky_relu(self, x, alpha=0.01):
        """Leaky ReLU to handle dying ReLU problem"""
        return np.where(x > 0, x, alpha * x)
    
    def leaky_relu_derivative(self, x, alpha=0.01):
        """Derivative of Leaky ReLU"""
        return np.where(x > 0, 1, alpha)
    
    def sigmoid(self, x):
        """Sigmoid activation function"""
        # Clip x to prevent overflow
        x = np.clip(x, -500, 500)
        return 1 / (1 + np.exp(-x))
    
    def sigmoid_derivative(self, x):
        """Derivative of sigmoid function"""
        return x * (1 - x)
    
    def softmax(self, x):
        """Softmax activation for output layer"""
        exp_x = np.exp(x - np.max(x, axis=1, keepdims=True))
        return exp_x / np.sum(exp_x, axis=1, keepdims=True)
    
    def batch_normalization(self, x, gamma, beta, running_mean, running_var, 
                          training=True, momentum=0.9, epsilon=1e-5):
        """
        Batch normalization to stabilize training and prevent vanishing gradients
        """
        if training:
            # Calculate batch statistics
            batch_mean = np.mean(x, axis=0, keepdims=True)
            batch_var = np.var(x, axis=0, keepdims=True)
            
            # Update running statistics
            running_mean = momentum * running_mean + (1 - momentum) * batch_mean
            running_var = momentum * running_var + (1 - momentum) * batch_var
            
            # Normalize
            x_norm = (x - batch_mean) / np.sqrt(batch_var + epsilon)
        else:
            # Use running statistics during inference
            x_norm = (x - running_mean) / np.sqrt(running_var + epsilon)
        
        # Scale and shift
        return gamma * x_norm + beta, running_mean, running_var
    
    def dropout(self, x, training=True):
        """Dropout regularization"""
        if training and self.dropout_rate > 0:
            mask = np.random.binomial(1, 1 - self.dropout_rate, x.shape) / (1 - self.dropout_rate)
            return x * mask, mask
        return x, np.ones_like(x)
    
    def forward_pass(self, X, training=True):
        """
        Forward pass through the network with all regularization techniques
        """
        activations = [X]
        z_values = []
        dropout_masks = []
        bn_stats = []
        
        for i in range(len(self.weights)):
            # Linear transformation
            z = np.dot(activations[-1], self.weights[i]) + self.biases[i]
            z_values.append(z)
            
            # Batch normalization (except for output layer)
            if self.use_batch_norm and i < len(self.weights) - 1:
                z_norm, running_mean, running_var = self.batch_normalization(
                    z, self.bn_gamma[i], self.bn_beta[i], 
                    self.bn_running_mean[i], self.bn_running_var[i], training
                )
                self.bn_running_mean[i] = running_mean
                self.bn_running_var[i] = running_var
                bn_stats.append((z_norm, z))
                z = z_norm
            else:
                bn_stats.append((z, z))
            
            # Activation function
            if i == len(self.weights) - 1:  # Output layer
                if self.layers[-1] == 1:  # Binary classification
                    a = self.sigmoid(z)
                else:  # Multi-class classification
                    a = self.softmax(z)
            else:  # Hidden layers - use ReLU to prevent vanishing gradients
                a = self.leaky_relu(z)
            
            # Dropout (except for output layer)
            if i < len(self.weights) - 1:
                a, mask = self.dropout(a, training)
                dropout_masks.append(mask)
            else:
                dropout_masks.append(np.ones_like(a))
            
            activations.append(a)
        
        return activations, z_values, dropout_masks, bn_stats
    
    def compute_loss(self, y_true, y_pred, class_weights=None):
        """
        Compute weighted cross-entropy loss to handle class imbalance
        """
        n_samples = y_true.shape[0]
        
        if self.layers[-1] == 1:  # Binary classification
            # Binary cross-entropy
            y_pred = np.clip(y_pred, 1e-7, 1 - 1e-7)
            loss = -np.mean(y_true * np.log(y_pred) + (1 - y_true) * np.log(1 - y_pred))
        else:  # Multi-class classification
            # Categorical cross-entropy
            y_pred = np.clip(y_pred, 1e-7, 1 - 1e-7)
            loss = -np.mean(np.sum(y_true * np.log(y_pred), axis=1))
        
        # Apply class weights if provided
        if class_weights is not None:
            sample_weights = np.sum(y_true * class_weights, axis=1)
            if self.layers[-1] == 1:
                weighted_loss = -np.mean(sample_weights * (y_true * np.log(y_pred) + (1 - y_true) * np.log(1 - y_pred)))
            else:
                weighted_loss = -np.mean(sample_weights * np.sum(y_true * np.log(y_pred), axis=1))
            return weighted_loss
        
        return loss
    
    def backward_pass(self, X, y, activations, z_values, dropout_masks, bn_stats, class_weights=None):
        """
        Backpropagation for multiple hidden layers with all regularization techniques
        """
        n_samples = X.shape[0]
        
        # Initialize gradients
        dW = [np.zeros_like(w) for w in self.weights]
        db = [np.zeros_like(b) for b in self.biases]
        
        if self.use_batch_norm:
            d_gamma = [np.zeros_like(g) for g in self.bn_gamma]
            d_beta = [np.zeros_like(b) for b in self.bn_beta]
        
        # Output layer error
        if self.layers[-1] == 1:  # Binary classification
            delta = activations[-1] - y
        else:  # Multi-class classification
            delta = activations[-1] - y
        
        # Apply class weights to the error
        if class_weights is not None:
            sample_weights = np.sum(y * class_weights, axis=1, keepdims=True)
            delta = delta * sample_weights
        
        # Backpropagate through each layer
        for i in range(len(self.weights) - 1, -1, -1):
            # Compute gradients for weights and biases
            dW[i] = np.dot(activations[i].T, delta) / n_samples
            db[i] = np.mean(delta, axis=0, keepdims=True)
            
            if i > 0:  # Not the first layer
                # Apply dropout mask
                delta = delta * dropout_masks[i-1]
                
                # Propagate error through activation function
                if i == len(self.weights) - 1:  # Output layer
                    if self.layers[-1] == 1:
                        # Sigmoid derivative already included in delta calculation
                        pass
                    else:
                        # Softmax derivative already included in delta calculation
                        pass
                else:  # Hidden layers
                    z_norm, z_orig = bn_stats[i]
                    delta = delta * self.leaky_relu_derivative(z_norm)
                
                # Batch normalization gradients
                if self.use_batch_norm and i < len(self.weights):
                    z_norm, z_orig = bn_stats[i]
                    
                    # Gradients for batch norm parameters
                    d_gamma[i] = np.mean(delta * z_norm, axis=0, keepdims=True)
                    d_beta[i] = np.mean(delta, axis=0, keepdims=True)
                    
                    # Gradient through batch normalization
                    batch_mean = np.mean(z_orig, axis=0, keepdims=True)
                    batch_var = np.var(z_orig, axis=0, keepdims=True)
                    
                    x_centered = z_orig - batch_mean
                    std_inv = 1.0 / np.sqrt(batch_var + 1e-5)
                    
                    delta = (1.0 / n_samples) * self.bn_gamma[i] * std_inv * (
                        n_samples * delta - 
                        np.sum(delta, axis=0, keepdims=True) - 
                        x_centered * std_inv**2 * np.sum(delta * x_centered, axis=0, keepdims=True)
                    )
                
                # Propagate to previous layer
                delta = np.dot(delta, self.weights[i].T)
        
        # Return gradients
        if self.use_batch_norm:
            return dW, db, d_gamma, d_beta
        else:
            return dW, db
    
    def update_weights(self, dW, db, d_gamma=None, d_beta=None):
        """Update weights and biases using gradient descent"""
        for i in range(len(self.weights)):
            self.weights[i] -= self.learning_rate * dW[i]
            self.biases[i] -= self.learning_rate * db[i]
        
        if self.use_batch_norm and d_gamma is not None:
            for i in range(len(self.bn_gamma)):
                self.bn_gamma[i] -= self.learning_rate * d_gamma[i]
                self.bn_beta[i] -= self.learning_rate * d_beta[i]
    
    def predict(self, X):
        """Make predictions"""
        activations, _, _, _ = self.forward_pass(X, training=False)
        return activations[-1]
    
    def accuracy(self, y_true, y_pred):
        """Compute accuracy"""
        if self.layers[-1] == 1:  # Binary classification
            predictions = (y_pred > 0.5).astype(int)
            return np.mean(predictions == y_true)
        else:  # Multi-class classification
            predictions = np.argmax(y_pred, axis=1)
            y_true_labels = np.argmax(y_true, axis=1)
            return np.mean(predictions == y_true_labels)
    
    def train(self, X_train, y_train, X_val, y_val, epochs=100, class_weights=None, verbose=True):
        """
        Train the neural network with early stopping and all regularization techniques
        """
        best_val_loss = float('inf')
        patience_counter = 0
        best_weights = None
        
        n_samples = X_train.shape[0]
        n_batches = n_samples // self.batch_size
        
        for epoch in range(epochs):
            # Shuffle training data
            indices = np.random.permutation(n_samples)
            X_train_shuffled = X_train[indices]
            y_train_shuffled = y_train[indices]
            
            epoch_loss = 0
            epoch_acc = 0
            
            # Mini-batch gradient descent
            for i in range(n_batches):
                start_idx = i * self.batch_size
                end_idx = min((i + 1) * self.batch_size, n_samples)
                
                X_batch = X_train_shuffled[start_idx:end_idx]
                y_batch = y_train_shuffled[start_idx:end_idx]
                
                # Forward pass
                activations, z_values, dropout_masks, bn_stats = self.forward_pass(X_batch, training=True)
                
                # Compute loss
                batch_loss = self.compute_loss(y_batch, activations[-1], class_weights)
                batch_acc = self.accuracy(y_batch, activations[-1])
                
                # Backward pass
                if self.use_batch_norm:
                    dW, db, d_gamma, d_beta = self.backward_pass(
                        X_batch, y_batch, activations, z_values, dropout_masks, bn_stats, class_weights
                    )
                    self.update_weights(dW, db, d_gamma, d_beta)
                else:
                    dW, db = self.backward_pass(
                        X_batch, y_batch, activations, z_values, dropout_masks, bn_stats, class_weights
                    )
                    self.update_weights(dW, db)
                
                epoch_loss += batch_loss
                epoch_acc += batch_acc
            
            # Average loss and accuracy for the epoch
            avg_train_loss = epoch_loss / n_batches
            avg_train_acc = epoch_acc / n_batches
            
            # Validation
            val_pred = self.predict(X_val)
            val_loss = self.compute_loss(y_val, val_pred, class_weights)
            val_acc = self.accuracy(y_val, val_pred)
            
            # Store history
            self.train_loss_history.append(avg_train_loss)
            self.val_loss_history.append(val_loss)
            self.train_acc_history.append(avg_train_acc)
            self.val_acc_history.append(val_acc)
            
            # Early stopping
            if val_loss < best_val_loss:
                best_val_loss = val_loss
                patience_counter = 0
                best_weights = [w.copy() for w in self.weights]
            else:
                patience_counter += 1
            
            if patience_counter >= self.patience:
                if verbose:
                    print(f"Early stopping at epoch {epoch + 1}")
                # Restore best weights
                self.weights = best_weights
                break
            
            if verbose and (epoch + 1) % 10 == 0:
                print(f"Epoch {epoch + 1}/{epochs} - "
                      f"Train Loss: {avg_train_loss:.4f}, Train Acc: {avg_train_acc:.4f}, "
                      f"Val Loss: {val_loss:.4f}, Val Acc: {val_acc:.4f}")
    
    def plot_training_history(self):
        """Plot training history"""
        fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(12, 4))
        
        ax1.plot(self.train_loss_history, label='Train Loss')
        ax1.plot(self.val_loss_history, label='Validation Loss')
        ax1.set_title('Training and Validation Loss')
        ax1.set_xlabel('Epoch')
        ax1.set_ylabel('Loss')
        ax1.legend()
        
        ax2.plot(self.train_acc_history, label='Train Accuracy')
        ax2.plot(self.val_acc_history, label='Validation Accuracy')
        ax2.set_title('Training and Validation Accuracy')
        ax2.set_xlabel('Epoch')
        ax2.set_ylabel('Accuracy')
        ax2.legend()
        
        plt.tight_layout()
        plt.show()


def preprocess_data(df, target_column, test_size=0.2, val_size=0.1):
    """
    Preprocess data with feature scaling and handle class imbalance
    """
    # Prepare features and target
    X = df.drop(columns=[target_column])
    y = df[target_column]
    
    # Handle categorical variables
    categorical_columns = X.select_dtypes(include=['object']).columns
    for col in categorical_columns:
        le = LabelEncoder()
        X[col] = le.fit_transform(X[col].astype(str))
    
    # Handle target variable
    if y.dtype == 'object':
        le_target = LabelEncoder()
        y = le_target.fit_transform(y)
    
    # Convert to binary if needed
    unique_classes = np.unique(y)
    if len(unique_classes) == 2:
        y = y.reshape(-1, 1)
        n_classes = 1
    else:
        # One-hot encode for multi-class
        y_onehot = np.zeros((len(y), len(unique_classes)))
        y_onehot[np.arange(len(y)), y] = 1
        y = y_onehot
        n_classes = len(unique_classes)
    
    # Split data
    X_temp, X_test, y_temp, y_test = train_test_split(
        X, y, test_size=test_size, random_state=42, stratify=y if n_classes == 1 else np.argmax(y, axis=1)
    )
    
    X_train, X_val, y_train, y_val = train_test_split(
        X_temp, y_temp, test_size=val_size/(1-test_size), random_state=42, 
        stratify=y_temp if n_classes == 1 else np.argmax(y_temp, axis=1)
    )
    
    # Feature scaling
    scaler = StandardScaler()
    X_train_scaled = scaler.fit_transform(X_train)
    X_val_scaled = scaler.transform(X_val)
    X_test_scaled = scaler.transform(X_test)
    
    # Compute class weights for imbalanced data
    if n_classes == 1:
        class_weights = compute_class_weight('balanced', 
                                           classes=np.unique(y_train.flatten()), 
                                           y=y_train.flatten())
        class_weight_dict = dict(zip(np.unique(y_train.flatten()), class_weights))
        class_weights = np.array([class_weight_dict[0], class_weight_dict[1]]).reshape(1, -1)
    else:
        y_train_labels = np.argmax(y_train, axis=1)
        class_weights = compute_class_weight('balanced', 
                                           classes=np.unique(y_train_labels), 
                                           y=y_train_labels)
        class_weights = class_weights.reshape(1, -1)
    
    return (X_train_scaled, X_val_scaled, X_test_scaled, 
            y_train, y_val, y_test, class_weights, n_classes)

# Example usage with your data
def train_model_on_data(df, target_column):
    """
    Complete training pipeline
    """
    print("Preprocessing data...")
    X_train, X_val, X_test, y_train, y_val, y_test, class_weights, n_classes = preprocess_data(
        df, target_column
    )
    
    print(f"Training set shape: {X_train.shape}")
    print(f"Validation set shape: {X_val.shape}")
    print(f"Test set shape: {X_test.shape}")
    print(f"Number of classes: {n_classes}")
    print(f"Class weights: {class_weights}")
    
    # Define network architecture
    input_size = X_train.shape[1]
    hidden_sizes = [64, 32, 16]  # Multiple hidden layers
    output_size = n_classes if n_classes > 1 else 1
    
    layers = [input_size] + hidden_sizes + [output_size]
    
    # Create and train model
    model = NeuralNetwork(
        layers=layers,
        learning_rate=0.001,
        dropout_rate=0.2,
        batch_size=32,
        use_batch_norm=True,
        patience=15
    )
    
    print("\nTraining model...")
    model.train(X_train, y_train, X_val, y_val, 
                epochs=200, class_weights=class_weights, verbose=True)
    
    # Evaluate model
    print("\nEvaluating model...")
    test_pred = model.predict(X_test)
    test_acc = model.accuracy(y_test, test_pred)
    print(f"Test Accuracy: {test_acc:.4f}")
    
    # Plot training history
    model.plot_training_history()
    
    return model, X_test, y_test, test_pred

# To use with your data:
# model, X_test, y_test, predictions = train_model_on_data(your_dataframe, 'target_column_name')
