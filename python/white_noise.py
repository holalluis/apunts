import random
import scipy

array = range(0,99)

for i in array:
	array[i]=2*random.random()-1;


hist=scipy.histogram(array)

for i in range(0,len(array)):
	print(hist[i])
