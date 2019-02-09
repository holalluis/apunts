#!/bin/bash

i=0;

while [ $i -lt $* ]
	do
	echo -n "*";
	let i+=1
	done;

echo;


