import numpy as np
import matplotlib.pyplot as plt

a= np.loadtxt("t.txt")
x = a[:,0]
y = a [:,1]

plt.plot(x,y)
plt.savefig("g1.png")
