# Static Libraries in C

This directory contains exercises and implementations that explore static libraries in C, focusing on creating and using archives of object files to promote code reusability and modular design.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Understand what static libraries are and their purpose in C programming
- Create static libraries using the ar command and related tools
- Use the ranlib command to generate an index for a library
- Link programs with static libraries during compilation
- Follow naming conventions for libraries
- Write scripts to automate library creation
- Apply best practices for organizing library code
- Use the nm command to list symbols in object files and libraries

## What is a Static Library?

A static library is a collection of object files that are linked with a program during the linking phase of compilation. Unlike shared libraries (dynamic libraries), the code from static libraries becomes part of the executable, resulting in a larger binary but eliminating runtime dependencies.

Static libraries in Unix/Linux systems typically have the `.a` extension (archive), while the corresponding header files define the interfaces to the functionality contained in the library.

## Project Files

- **[libmy.a](./libmy.a)**: A static library containing various utility functions
- **[main.h](./main.h)**: Header file containing the function prototypes for the library
- **[create_static_lib.sh](./create_static_lib.sh)**: Shell script to create a static library from all `.c` files in the current directory

## Creating a Static Library

### Step 1: Compile Source Files into Object Files

Before creating a library, you need to compile your source files into object files:

```bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
```

The `-c` flag tells the compiler to compile the source files without linking, producing `.o` object files.

### Step 2: Create the Archive

Use the `ar` (archive) command to create the static library:

```bash
ar -rc libname.a *.o
```

The options used are:
- `r`: Replace or add files to the archive
- `c`: Create the archive if it doesn't exist

### Step 3: Index the Library

Use `ranlib` to generate an index for the library, which speeds up symbol lookups:

```bash
ranlib libname.a
```

### All Steps in a Shell Script

The process can be automated with a shell script:

```bash
#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc libname.a *.o
ranlib libname.a
```

## Using a Static Library

### Step 1: Include the Header File

In your source file, include the header file that contains the function prototypes:

```c
#include "main.h"
```

### Step 2: Compile with the Library

When compiling your program, specify the library using the `-l` flag and the library path using the `-L` flag:

```bash
gcc -Wall -Werror -Wextra -pedantic main.c -L. -lname -o program
```

The options used are:
- `-L.`: Look for libraries in the current directory
- `-lname`: Link with `libname.a` (note that the `lib` prefix and `.a` suffix are implicit)

## Viewing Library Contents

You can use several commands to examine the contents of a static library:

### Using ar to List Contents

```bash
ar -t libname.a
```

This lists all object files contained in the archive.

### Using nm to View Symbols

```bash
nm libname.a
```

This lists symbols (functions, variables) defined in the library, along with their types and addresses.

## Standard C Libraries

C comes with several standard libraries that provide common functionality:

- **libc**: The standard C library containing functions like printf, malloc, etc.
- **libm**: The math library containing mathematical functions
- **libpthread**: The POSIX threads library

These libraries are typically linked automatically by the compiler when needed.

## Static vs. Dynamic Libraries

### Static Libraries

**Advantages:**
- No runtime dependencies
- Potentially faster function calls
- Simpler deployment (single executable)

**Disadvantages:**
- Larger executable size
- Memory inefficiency if multiple programs use the same library
- Requires recompilation if the library changes

### Dynamic Libraries

**Advantages:**
- Smaller executable size
- Memory efficiency (shared among multiple programs)
- Library updates don't require recompilation of programs

**Disadvantages:**
- Runtime dependencies
- Slightly slower function calls
- More complex deployment (managing library versions)

## Best Practices

1. **Organize Related Functions**: Group related functions in the same library
2. **Clear Interfaces**: Provide well-documented header files
3. **Consistent Naming**: Follow consistent naming conventions
4. **Error Handling**: Include robust error handling in library functions
5. **Minimize Dependencies**: Avoid unnecessary dependencies between libraries
6. **Version Control**: Track library versions in a systematic way

## Common Issues and Solutions

### Undefined Reference Errors

If you get "undefined reference" errors during linking, check:
- That the function is actually implemented in the library
- That you're linking with the correct library
- That the function signature matches the prototype

### Multiple Definition Errors

If you get "multiple definition" errors, check:
- That you're not including implementation files
- That you're not defining functions in header files
- That you have proper include guards

## Compilation

The static library can be created using:

```bash
./create_static_lib.sh
```

Programs using the library can be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic main.c -L. -lmy -o program
```

## Additional Resources

- [Static Libraries in C - GeeksforGeeks](https://www.geeksforgeeks.org/static-vs-dynamic-libraries/)
- [Creating a Static C Library Using ar and ranlib](https://www.cprogramming.com/tutorial/statickeyword.html)
- [Using ar Command in Linux - Linux Documentation](https://linux.die.net/man/1/ar)
- [GCC Documentation - Using the GNU Compiler Collection](https://gcc.gnu.org/onlinedocs/gcc/)

