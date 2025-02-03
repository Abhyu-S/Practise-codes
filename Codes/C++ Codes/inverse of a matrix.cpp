#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Function to perform Gauss-Jordan elimination to find the inverse
bool invertMatrix(vector<vector<double>> &A, vector<vector<double>> &inverse) {
    int n = A.size();
    
    // Augmenting identity matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inverse[i][j] = (i == j) ? 1.0 : 0.0;
        }
    }
    
    // Applying Gauss-Jordan elimination
    for (int i = 0; i < n; i++) {
        // Finding the pivot
        double pivot = A[i][i];
        if (pivot == 0) {
            return false; // Singular matrix, no inverse
        }
        
        // Normalize the pivot row
        for (int j = 0; j < n; j++) {
            A[i][j] /= pivot;
            inverse[i][j] /= pivot;
        }
        
        // Make other rows zero in the current column
        for (int k = 0; k < n; k++) {
            if (k != i) {
                double factor = A[k][i];
                for (int j = 0; j < n; j++) {
                    A[k][j] -= factor * A[i][j];
                    inverse[k][j] -= factor * inverse[i][j];
                }
            }
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    
    vector<vector<double>> A(n, vector<double>(n));
    vector<vector<double>> inverse(n, vector<double>(n));
    
    cout << "Enter the matrix elements row by row:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    
    if (invertMatrix(A, inverse)) {
        cout << "The inverse of the matrix is:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << fixed << setprecision(5) << inverse[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "The matrix is singular and does not have an inverse." << endl;
    }
    
    return 0;
}