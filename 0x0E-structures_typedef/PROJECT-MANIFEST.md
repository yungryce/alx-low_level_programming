# Project Manifest: Structures and typedef in C

## Project Identity
- **Name**: Structures and typedef
- **Type**: Educational
- **Scope**: Custom Data Types in C
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Style Guide**: Betty

## Demonstrated Competencies
- Structure definition and initialization
- Type aliasing with typedef
- Creation of custom data types
- Memory management for structures
- Function pointer usage with structures
- Structure member access
- Structure passing and returning
- Header file organization for custom types

## System Context
This module introduces structures (structs) and type definitions (typedef) in C, which are fundamental for creating complex data types that group related variables under a single name. These concepts are essential for data organization, abstraction, and advanced programming techniques.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Text Editor (vi/vim/emacs)

## Development Workflow
1. Define structures to represent complex data types
2. Create typedefs for cleaner and more readable code
3. Implement functions to manipulate structures
4. Manage memory for structure instances
5. Apply structure operations in practical scenarios
6. Test structure functionality and memory integrity

## Implementation Specifics

### Structure and typedef Implementation
- **Dog Definition**: [dog.h](./dog.h) - Defines a struct dog with name, age, and owner
- **Dog Initialization**: [1-init_dog.c](./1-init_dog.c) - Initializes a variable of type struct dog
- **Dog Information**: [2-print_dog.c](./2-print_dog.c) - Prints struct dog information

### Advanced Structure Operations
- **Type Definition**: [dog.h](./dog.h) - Creates a typedef dog_t as a new name for struct dog
- **Memory Management**: [4-new_dog.c](./4-new_dog.c) - Creates a new dog with memory allocation
- **Cleanup**: [5-free_dog.c](./5-free_dog.c) - Frees memory allocated for dog structures

## Learning Outcomes
- Understanding the purpose and usage of structures in C
- Creating custom data types with typedef
- Managing memory for composite data types
- Implementing operations on structure instances
- Organizing code with header files for custom types
- Achieving data abstraction through structured types
- Applying structures for real-world data representation