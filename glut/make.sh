#!/bin/bash
if [[ $1 == "" ]]; then echo "Us: $0 [arxiu sense el punt c]"; exit; fi

a=$1
ops="-framework OpenGL -framework GLUT -framework Carbon"
clear
#Compila 
(g++ $a.c -o $a $ops || g++ $a.cc -o $a $ops || g++ $a.cpp -o $a $ops ) 2>&1 | grep -v "No such file or directory" 

./$a

