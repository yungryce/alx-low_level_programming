# Project Manifest: Dynamic Memory Allocation in C

## Project Identity
- **Name**: Malloc and Free
- **Type**: Educational
- **Scope**: Dynamic Memory Allocation in C
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Memory Tools**: Valgrind
- **Style Guide**: Betty

## Demonstrated Competencies
- Dynamic memory allocation using malloc
- Memory deallocation using free
- Memory leak prevention
- Two-dimensional array dynamic allocation
- String duplication and concatenation
- Memory management for variable-sized inputs
- Pointer arithmetic with dynamically allocated memory
- Error handling for allocation failures

## System Context
This module introduces dynamic memory allocation, a fundamental concept in C programming that allows for runtime memory management. Understanding malloc and free is critical for efficient resource utilization and avoiding memory leaks in applications.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Valgrind for memory leak detection
- Text Editor (vi/vim/emacs)

## Development Workflow
1. Understand memory allocation concepts
2. Implement solutions using malloc for appropriate memory allocation
3. Ensure proper memory deallocation with free
4. Test with various input sizes to verify dynamic behavior
5. Use Valgrind to check for memory leaks
6. Handle edge cases including allocation failures

## Implementation Specifics

### Basic Memory Allocation
- **Character Array**: [0-create_array.c](./0-create_array.c) - Creates array of chars, initializes with specific char
- **String Duplication**: [1-strdup.c](./1-strdup.c) - Duplicates a string using malloc
- **String Concatenation**: [2-str_concat.c](./2-str_concat.c) - Concatenates two strings

### Multi-dimensional Allocation
- **2D Integer Array**: [3-alloc_grid.c](./3-alloc_grid.c) - Allocates a 2D array of integers
- **Memory Cleanup**: [4-free_grid.c](./4-free_grid.c) - Frees a 2D grid created by alloc_grid

### Advanced Operations
- **String Joining**: [100-argstostr.c](./100-argstostr.c) - Concatenates all arguments of a program
- **String Splitting**: [101-strtow.c](./101-strtow.c) - Splits a string into words

## Learning Outcomes
- Understanding the difference between automatic and dynamic allocation
- Implementing proper memory management practices
- Handling memory for data structures of variable size
- Avoiding memory leaks through consistent deallocation
- Managing complex memory patterns like arrays of strings
- Implementing error handling for allocation failures