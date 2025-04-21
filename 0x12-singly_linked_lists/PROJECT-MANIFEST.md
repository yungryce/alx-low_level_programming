# Project Manifest: Singly Linked Lists in C

## Project Identity
- **Name**: Singly Linked Lists
- **Type**: Educational
- **Scope**: Data Structure Implementation
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Data Structure**: Singly Linked Lists
- **Style Guide**: Betty

## Demonstrated Competencies
- Dynamic data structure implementation
- Linked list node creation and management
- Memory allocation for data structures
- Pointer manipulation for list traversal
- List insertion at different positions
- List deletion and memory cleanup
- String duplication and management
- Self-referential structures
- Assembly language basics
- Function execution before main

## System Context
This module introduces singly linked lists, a fundamental dynamic data structure that allows for efficient insertion and deletion operations. Linked lists are essential for implementing more complex data structures and algorithms, and provide a foundation for understanding dynamic memory management in programming.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Text Editor (vi/vim/emacs)
- Valgrind for memory leak detection
- Understanding of pointers and dynamic memory

## Development Workflow
1. Define linked list structure for nodes
2. Implement functions for list operations
3. Manage memory allocation and deallocation
4. Traverse lists using pointer manipulation
5. Handle edge cases (empty lists, insertions at beginning/end)
6. Test list operations for correctness
7. Check for memory leaks and proper cleanup
8. Implement advanced features like constructor functions

## Implementation Specifics

### Core Data Structure
- **List Definition**: [lists.h](./lists.h) - Defines the list_t structure and function prototypes

### Basic List Operations
- **List Printing**: [0-print_list.c](./0-print_list.c) - Prints all elements of a linked list
- **List Length**: [1-list_len.c](./1-list_len.c) - Returns the number of elements in a linked list

### List Modification
- **Add Node**: [2-add_node.c](./2-add_node.c) - Adds a new node at the beginning of a list
- **Append Node**: [3-add_node_end.c](./3-add_node_end.c) - Adds a new node at the end of a list
- **Free List**: [4-free_list.c](./4-free_list.c) - Frees all nodes of a list

### Advanced Features
- **Constructor Function**: [100-first.c](./100-first.c) - Function that executes before main
- **Assembly String**: [101-hello_holberton.asm](./101-hello_holberton.asm) - Assembly program to print a string

## Learning Outcomes
- Implementing singly linked list data structures
- Managing dynamic memory for node creation and deletion
- Traversing linked lists with pointer manipulation
- Creating self-referential structures
- Handling insertion at different positions in a list
- Implementing proper memory cleanup
- Understanding the relationship between linked lists and memory
- Exploring function execution order with constructors
- Gaining basic exposure to assembly language