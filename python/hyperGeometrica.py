
import sys
import math

N=60 	# cartes a la baralla
D=26 	# cartes del tipus a estudiar
n=30 	# draws
x=23 	# draws que son del tipus

resultat=0

def sobre(a,b):
	numerador = float(math.factorial(a))
	denominador = float(math.factorial(b)*math.factorial(a-b))
	return numerador/denominador

print sobre(D,x)*sobre(N-D,n-x)/sobre(N,n)

for i in range(1,x+1):
	resultat+=sobre(D,i)*sobre(N-D,n-i)/sobre(N,n)

print resultat
