#!/bin/bash

# Compile source files into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create a shared library from object files
gcc -shared -o liball.so *.o

# Compile main program using the shared library
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -L. -lall -o len main.c
