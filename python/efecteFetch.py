import random
import math

#algoritme de yates per barrejar un array
def shuf(baralla):
	for i in range(len(baralla)-1,0,-1):
		j = int(math.floor(random.random()*(i+1)))
		temp = baralla[i]
		baralla[i] = baralla[j]
		baralla[j] = temp
	return baralla

def ma_inicial(baralla):
	for i in range(7):
		print baralla.pop(0)

#treu una island del deck
def fetchLand(baralla):
	i=0
	while(1):
		if(baralla[i]=="island"):
			baralla.pop(i)
			shuf(baralla)
			break
		i+=1

#fes un draw
def draw(baralla):
	cartaRobada=baralla.pop(0)
	if(cartaRobada=="fetch"):
		fetchLand(baralla)
	print cartaRobada,"	-	Queden",len(baralla),"cartes"

baralla=[
	"island",
	"island",
	"island",
	"island",
	"island",
	"island",
	"island",
	"island",
	"island",
	"island",
	"island",
	"island",
	"fetch",
	"fetch",
	"fetch",
	"fetch",
	"fetch",
	"fetch",
	"fetch",
	"fetch",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell",
	"spell"
]

baralla=shuf(baralla)
print ">>> la baralla te ",len(baralla),"cartes"
ma_inicial(baralla)
print ">>> la baralla te ",len(baralla),"cartes"
print "10 DRAWS"
print "========"

draw(baralla)
draw(baralla)
draw(baralla)
draw(baralla)
draw(baralla)
draw(baralla)
draw(baralla)
draw(baralla)
draw(baralla)
draw(baralla)
