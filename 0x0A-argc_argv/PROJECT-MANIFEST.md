# Project Manifest: Command Line Arguments in C

## Project Identity
- **Name**: argc, argv
- **Type**: Educational
- **Scope**: Command Line Arguments in C
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Style Guide**: Betty

## Demonstrated Competencies
- Command-line argument processing
- Argument count and argument vector understanding
- String to integer conversion
- Program name retrieval
- Command-line based program flow control
- Parameter validation and error handling
- Memory management with varying input sizes
- Integer arithmetic with command-line inputs

## System Context
This module builds upon previous C programming knowledge and introduces handling command-line arguments, which is essential for creating interactive programs that can receive input directly when executed.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Text Editor (vi/vim/emacs)
- Command-line environment for testing

## Development Workflow
1. Study argument handling concepts in C
2. Implement solutions to process different types of command-line inputs
3. Test programs with various command-line arguments
4. Verify correct handling of edge cases (no arguments, invalid arguments)
5. Ensure proper memory management when processing arguments

## Implementation Specifics

### Basic Argument Handling
- **Program Name**: [0-whatsmyname.c](./0-whatsmyname.c) - Prints the program name
- **Argument Counter**: [1-args.c](./1-args.c) - Displays the number of arguments
- **Argument Printer**: [2-args.c](./2-args.c) - Prints all arguments received

### Advanced Operations
- **Multiplication**: [3-mul.c](./3-mul.c) - Multiplies two numbers provided as arguments
- **Addition**: [4-add.c](./4-add.c) - Adds positive numbers provided as arguments

### Optional Challenges
- **Change Maker**: [100-change.c](./100-change.c) - Calculates minimum number of coins for change

## Learning Outcomes
- Understanding how programs interact with the command line
- Processing variable numbers of inputs
- Converting string arguments to appropriate data types
- Implementing input validation for command-line programs
- Using standard C library functions for argument processing