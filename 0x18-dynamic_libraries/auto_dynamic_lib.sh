#!/bin/bash

echo "Give your Dynamic Library a name (.so)"
read message

gcc -c -fPIC -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
gcc -shared -o $message *.o
export LD_LIBRARY_PATH=.:
rm *.o
echo "Library packaged successfully."
