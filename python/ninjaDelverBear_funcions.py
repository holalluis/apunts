import math
import random

def shuf(baralla):
	#algoritme de yates per barrejar un array
	for i in range(len(baralla)-1,0,-1):
		j = int(math.floor(random.random()*(i+1)))
		temp = baralla[i]
		baralla[i] = baralla[j]
		baralla[j] = temp
	return baralla

def queden(baralla):
	#digues quantes cartes queden en total
	print "\nQueden",len(baralla),"cartes a la baralla:"

def quantesCartesQuedenDe(carta,baralla):
	#digues quantes cartes queden en concret
	total=0
	for i in baralla:
		if(i==carta):
			total+=1
	if(total!=0):
		print "	Queden",total,carta,"		-	Probabilitat:",round(100*float(total)/len(baralla),2),"%"
	else:
		print "	No queden",carta

def queQueda(baralla,arrayDeCartes):
	#que queda a tota la baralla
	queden(baralla)
	for i in arrayDeCartes:
		quantesCartesQuedenDe(i,baralla)
	print "\n"

