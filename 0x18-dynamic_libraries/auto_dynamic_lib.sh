#!/bin/bash

echo "Enter file name(s) or use wildcard example *.c"
read msg

gcc -c -fPIC -Wall -Werror -Wextra -pedantic -std=gnu89 $msg

echo "Give your Dynamic Library a name (.so)"
read lib

gcc -shared -o $lib *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
rm -rf *.o
echo "Library packaged successfully."
