#!/bin/bash

src="$1"

output="$2"

gcc `pkg-config --cflags gtk+-3.0` -o $output $src `pkg-config --libs gtk+-3.0`
