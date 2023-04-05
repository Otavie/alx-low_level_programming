#!/bin/bash

# Compile each .c file into an object file

for file in *.c
do
	gcc -c "$file"
done

ar rc liball.a *.o

rm -f *.o
