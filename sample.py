import numpy as np
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import sys

D = np.loadtxt('sample.dat')


N = float(sys.argv[1])
mu = float(sys.argv[2])
s = float(sys.argv[3])

_ = plt.hist(D, normed=True)

Mn = np.min(mu + 4*s)
Mx = np.max(mu - 4*s)

x = np.linspace(Mn,Mx,N)
y = np.exp( - ( x - mu ) ** 2.0 / 2 * s**2.0 ) / (s * np.sqrt(2.0 * np.pi) )

plt.plot(x,y)
plt.savefig('sample.pdf')
