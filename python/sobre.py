#!/usr/bin/python

import sys
import math

a=int(sys.argv[1])
b=int(sys.argv[2])

numerador = math.factorial(a)
denominador = math.factorial(b)*math.factorial(a-b)

print numerador/denominador
