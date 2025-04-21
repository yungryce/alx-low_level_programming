# Command-Line Arguments in C: `argc` and `argv`

This directory contains exercises that explore the use of command-line arguments in C programs through the `argc` (argument count) and `argv` (argument vector) parameters of the main function.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Understand how to access command-line arguments in C programs
- Use the `argc` parameter to determine the number of arguments passed
- Access individual arguments using the `argv` array of strings
- Convert string arguments to integers using `atoi()`
- Implement proper error handling for command-line inputs
- Create programs that respond differently based on argument quantity and content
- Apply the unused variable attribute when necessary

## Command-Line Arguments Overview

When writing a command-line program, you often need to provide inputs or options to control its behavior. Command-line arguments allow users to pass such inputs to a program when launching it from a terminal.

In C, the main function can accept two parameters:
- `argc` (argument count): The number of command-line arguments passed to the program, including the program name itself
- `argv` (argument vector): An array of strings holding the actual arguments, with `argv[0]` being the program name

## Project Files

This directory includes the following programs:

- **[0-whatsmyname.c](./0-whatsmyname.c)**: Prints the program name, demonstrating `argv[0]` usage
- **[1-args.c](./1-args.c)**: Prints the number of arguments passed, showing how to use `argc`
- **[2-args.c](./2-args.c)**: Prints all arguments received, one per line, showing array traversal
- **[3-mul.c](./3-mul.c)**: Multiplies two numbers provided as arguments, showing argument conversion
- **[4-add.c](./4-add.c)**: Adds positive numbers provided as arguments, demonstrating validation
- **[100-change.c](./100-change.c)**: Calculates minimum coins needed for change, showing complex argument processing

## Usage Examples

### Printing the Program Name

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
$ ./mynameis
./mynameis
$ mv mynameis mynewnameis
$ ./mynewnameis
./mynewnameis
```

### Counting Arguments

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
$ ./nargs 
0
$ ./nargs hello
1
$ ./nargs "hello, world" welcome to ALX
3
```

### Listing All Arguments

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
$ ./args 
./args
$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
```

### Multiplying Numbers

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
$ ./mul 2 3
6
$ ./mul 2 -3
-6
$ ./mul 2
Error
$ ./mul
Error
```

### Adding Positive Numbers

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
$ ./add 1 1
2
$ ./add 1 10 100 1000
1111
$ ./add 1 2 3 e 4 5
Error
$ ./add
0
```

## Implementation Techniques

### Accessing Arguments

```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    /* Program name is always at argv[0] */
    printf("Program name: %s\n", argv[0]);
    
    /* Loop through additional arguments */
    for (int i = 1; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    
    return (0);
}
```

### Converting String Arguments to Integers

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    
    /* Convert string arguments to integers */
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    
    printf("%d\n", num1 * num2);
    
    return (0);
}
```

### Handling Unused Variables

When you need to declare a parameter in the main function but don't use it:

```c
int main(int argc __attribute__((unused)), char *argv[])
{
    printf("Program name: %s\n", argv[0]);
    return (0);
}
```

### Error Handling

When working with command-line arguments, proper error handling is essential:

- Check if the expected number of arguments was provided
- Validate argument types (e.g., ensure a string can be converted to a number)
- Provide informative error messages when requirements aren't met

For example:

```c
if (argc != 3)
{
    printf("Error\n");
    return (1);
}
```

## Compilation

All programs in this directory should be compiled using:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 filename.c -o program_name
```

## Additional Resources

- [C Command Line Arguments (GeeksforGeeks)](https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/)
- [Using Argument Count and Vector (Programiz)](https://www.programiz.com/c-programming/c-command-line-arguments)
- [Converting Strings to Numbers in C](https://www.tutorialspoint.com/c_standard_library/c_function_atoi.htm)