import math 		# per la funcio factorial()

# definicio de la funcio "a sobre b"
def sobre(a,b):
	numerador=math.factorial(a)
	denominador=(math.factorial(b)*math.factorial(a-b))
	return numerador/denominador
	
q=int(raw_input("Nombre de cartes a la baralla? ")) 	# demana el nombre de cartes que te la baralla
print "================================\n"

print "Combinacions" # nombre de combinacions de mans amb al menys una carta
print "============"

mans=0

for i in range(1,q+1):
	print "Mans amb", i, "cartes:", sobre(7,i)
	mans += sobre(7,i) 

print "Total:", mans, "mans possibles amb almenys 1 carta a la ma inicial\n"

#nou vector amb 4 components
prob = range(4)

#transforma enter a decimal
q=float(q)

# TODO fer aixo amb bucles
prob[0] = sobre(7,1) * q/60 					* (60-q)/59 * (59-q)/58 * (58-q)/57 * (57-q)/56 * (56-q)/55 * (55-q)/54
prob[1] = sobre(7,2) * q/60 * (q-1)/59 				* (60-q)/58 * (59-q)/57 * (58-q)/56 * (57-q)/55 * (56-q)/54
prob[2] = sobre(7,3) * q/60 * (q-1)/59 * (q-2)/58 		* (60-q)/57 * (59-q)/56 * (58-q)/55 * (57-q)/54
prob[3] = sobre(7,4) * q/60 * (q-1)/59 * (q-2)/58 * (q-3)/57 	* (60-q)/56 * (59-q)/55 * (58-q)/54 

#transforma decimal a enter
q=int(q)

print "Ma inicial"
print "=========="
for i in range(q):
	print "Probabilitat de robar",i+1,"cartes :", prob[i]

print "Total (probabilitat de robar almenys 1 carta a la ma inicial):",sum(prob), "\n"

raw_input("Fi del programa, prem Enter per sortir ")
