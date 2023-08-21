#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
gcc -shared -o liball.so *.o
