#!/usr/bin/python

#imports
import os
import ninjaDelverBear_funcions as fun

#escriu la teva baralla
baralla=[
	"delver",
	"delver", 
	"delver",
	"delver",
	"bear",
	"bear",
	"bear",
	"bear",
	"ninja",
	"ninja",
	"ninja",
	"ninja",
	"snapcaster",
	"snapcaster",
	"snapcaster",
	"snapcaster",
	"gitaxian",
	"gitaxian",
	"gitaxian",
	"gitaxian",
	"serum",
	"serum",
	"serum",
	"serum",
	"vapor",
	"vapor",
	"vapor",
	"vapor",
	"shoal",
	"shoal",
	"shoal",
	"shoal",
	"remand",
	"remand",
	"remand",
	"remand",
	"cryptic",
	"cryptic",
	"cryptic",
	"cryptic",
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
	"island",
	"island",
	"island",
	"island",
	"island",
	"island",
	"mutavault",
	"mutavault"
]

noms=["delver","bear","ninja","snapcaster","gitaxian","serum","vapor","shoal","remand","cryptic","island","mutavault"]

os.system('clear')

#barreja
baralla=fun.shuf(baralla)

#roba 7 cartes
for i in range(7):
	print i+1,"-",baralla.pop(0)

while(1):
	fun.queQueda(baralla,noms)
	raw_input("Prem [Enter] per robar carta:")
	os.system('clear')
	print baralla.pop(0)

