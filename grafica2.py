import numpy as np
import matplotlib.pyplot as plt

a= np.loadtxt("t2.txt")
x = a[:,0]
y = a[:,1]

plt.plot(x,y)
plt.savefig("g2.png")
