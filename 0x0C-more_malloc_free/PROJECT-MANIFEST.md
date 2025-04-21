# Project Manifest: Advanced Memory Allocation in C

## Project Identity
- **Name**: More Malloc and Free
- **Type**: Educational
- **Scope**: Advanced Dynamic Memory Allocation
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Memory Tools**: Valgrind
- **Style Guide**: Betty

## Demonstrated Competencies
- Memory allocation with size calculation
- Memory reallocation using realloc
- Safe memory allocation with calloc
- Buffer manipulation and memory copying
- Integer overflow prevention
- Exit function usage for allocation failures
- Memory initialization techniques
- Advanced error handling for memory operations

## System Context
This module builds on the basic malloc concepts and introduces more advanced memory allocation techniques including realloc and calloc. It emphasizes safer memory handling practices and proper error management for robust memory operations.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Valgrind for memory leak detection
- Text Editor (vi/vim/emacs)

## Development Workflow
1. Analyze memory requirements for different data structures
2. Implement allocation strategies with appropriate error handling
3. Use calloc for zero-initialized memory when needed
4. Apply realloc for dynamic memory resizing
5. Test with various input sizes to verify memory management
6. Validate memory operations with edge cases
7. Check for memory leaks using Valgrind

## Implementation Specifics

### Advanced Allocation Techniques
- **Controlled Allocation**: [0-malloc_checked.c](./0-malloc_checked.c) - Allocates memory with error checking
- **String Concatenation**: [1-string_nconcat.c](./1-string_nconcat.c) - Concatenates two strings with byte limit
- **Zeroed Memory**: [2-calloc.c](./2-calloc.c) - Allocates memory for an array and initializes to zero
- **Dynamic Resizing**: [3-array_range.c](./3-array_range.c) - Creates an array of integers within a range

### Memory Manipulation
- **Memory Reallocation**: [100-realloc.c](./100-realloc.c) - Reallocates a memory block using malloc and free
- **Multiplication**: [101-mul.c](./101-mul.c) - Multiplies two positive numbers using dynamic memory

## Learning Outcomes
- Implementing safe memory allocation with proper error handling
- Using specialized memory functions for different requirements
- Managing memory for operations with varying size needs
- Avoiding common memory pitfalls like buffer overflows
- Handling memory reallocation efficiently
- Calculating appropriate memory sizes for complex operations