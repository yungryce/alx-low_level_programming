#!/bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
rm *.o
echo "Static library 'liball.so' created successfully."
