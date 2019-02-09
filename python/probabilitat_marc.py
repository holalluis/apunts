#!/usr/bin/python

import math

# definicio de la funcio "a sobre b"
def sobre(a,b):
	numerador=math.factorial(a)
	denominador=(math.factorial(b)*math.factorial(a-b))
	return numerador/denominador

# 30 draws, 23 terres de 26 i 7 spells
print float(sobre(30,23))*26/60*25/59*24/58*23/57*22/56*21/55*20/54*19/53*18/52*17/51*16/50*15/49*14/48*13/47*12/46*11/45*10/44*9/43*8/42*7/41*6/40*5/39*4/38*34/37*33/36*32/35*31/34*30/33*29/32*28/31
