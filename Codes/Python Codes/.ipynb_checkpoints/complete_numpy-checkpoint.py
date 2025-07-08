import numpy as np

# a = np.zeros((10,10,10))
# print(a)
# a = np.ones((10,10,10))
# print(a)
# a = np.empty((5,5))
# a_val = np.arange(1,1001,2)
# a_lin = np.linspace(0,1000,200)#equally divides number in the given range to generate 200 numbers in between
# print(a_val)

# a = np.array([1,np.e, np.pi])

# print(np.append(a, [7,8,9]))
# print (a) #doesn't actually appended to a

#to actallu copy it
# a = np.append(a, [7,8,9])
#similar goes with insert
# a = np.insert(a,3,[4,5,6])
# print(a)
# arr = np.arange(1, 21)
# print(arr.reshape(5,4))
# print(arr.reshape(2,2,5))
# arr.resize(2,2,5)
# print(arr.reshape(2,5, 2))
# print(arr.reshape(5,2,2))
# print(arr.reshape(4,5))
# print(arr.reshape(20,))
# print(arr.reshape(20,1))
# print(arr)
# print(arr.flatten())#only for printing purpose it is flattened
# print(arr.ravel())#Same array is flattened (deep copy)
# print(arr)
# var = [v for v in arr.flat]
# print(var)

#transpose arr.T swapaxes

# print(arr.transpose())
# print(arr.T)
# print(arr.swapaxes(0,2))

# a1 = np.arange(1,11)
# a1.resize(2,5)
# a2 = np.arange(11,21)
# a2.resize(2,5)

# a = np.concatenate((a1,a2), axis = 0)#adds elements to existing dimensions of a22 or a2
# a = np.stack((a1,a2))
# a = np.hstack((a1,a2))
# print(a)
# a = np.vstack((a1,a2))
# print(a)

# a = np.array([[1,2,3,4,5,6],
            #   [7,8,9,10,11,12],
            #   [13,14,15,16,17,18],
            #   [19,20,21,22,23,24]])

# print(np.split(a, 3, axis = 1))
# print(a.min())
# print(a.max())
# print(a.mean())
# print(a.std())
# print(a.sum())
# print(np.median(a))

# numbers = np.random.randint(90, 100 , size = (2,3,4))#range can also be defined
# print(numbers)

# number = np.random.binomial(10, p=0.5, size=(5,10))#in 10 trials how many times did head showmup when done multiple times
# print(number)

# number = np.random.normal(loc = 170, scale = 15, size=(3,2))#loc = mean, scale = std dev
# print(number)

# number = np.random.choice([10,20,30,40,50], size=(5,6))
# print(number)

# np.save("myarray.npy", number)

# a=np.load("myarray.npy")
# print(a)

# np.savetxt("myarray.csv",number, delimiter=",")

a = np.loadtxt("myarray.csv", delimiter=",")
print(a)