# Introduction to C Programming - Hello World

This directory contains introductory exercises for the C programming language, focusing on the compilation process, basic syntax, and standard input/output operations.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Understand the C compilation process and its stages
- Create and execute basic C programs
- Use shell scripts to automate compilation steps
- Apply proper C syntax following Betty style guidelines
- Utilize standard output functions like `printf` and `puts`
- Understand the memory layout of C programs
- Manipulate preprocessor directives

## The C Compilation Process

The C compilation process consists of four main stages:

1. **Preprocessing**: Handles directives like `#include` and `#define`
2. **Compilation**: Converts C code to assembly language
3. **Assembly**: Converts assembly code to object code
4. **Linking**: Combines object files and libraries into an executable

This directory includes scripts that demonstrate each of these stages.

## Project Files

### Shell Scripts
- **[0-preprocessor](./0-preprocessor)**: Runs a C file through the preprocessor and saves the result
- **[1-compiler](./1-compiler)**: Compiles a C file without linking
- **[2-assembler](./2-assembler)**: Generates assembly code from a C file
- **[3-name](./3-name)**: Creates an executable named `cisfun` from a C file

### C Programs
- **[4-puts.c](./4-puts.c)**: Prints a string using the `puts` function
- **[5-printf.c](./5-printf.c)**: Prints a string using the `printf` function
- **[6-size.c](./6-size.c)**: Prints the size of various data types
- **[100-intel](./100-intel)**: Generates Intel syntax assembly code
- **[101-quote.c](./101-quote.c)**: Prints to standard error without using `printf` or `puts`

## Compilers

This project uses GCC (GNU Compiler Collection) to compile C code. Other popular C compilers include:

- Clang
- Microsoft Visual C++
- Intel C++ Compiler

## Getting Started

To run these exercises, you need a Linux environment with GCC installed.

### Compiling and Running Examples

1. To run the preprocessor on a file:
   ```bash
   ./0-preprocessor
```

## Contributing

If you find any issues, have suggestions, or want to contribute to this repository, please feel free to submit a pull request or open an issue. Your contributions are highly appreciated!

