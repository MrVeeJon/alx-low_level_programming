#!/bin/bash

source_files=$(ls *.c 2>/dev/null)

if [ -z "$source_files" ]; then
	echo ".c files not found."
	exit 1
fi

gcc -shared -o liball.so $source_files

if [ $? -eq 0 ]; then
	echo "Dynamic library liball.so created."
else
	exho "failed. Check source file errors."
fi
