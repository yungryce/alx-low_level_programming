# Project Manifest: Doubly Linked Lists in C

## Project Identity
- **Name**: Doubly Linked Lists
- **Type**: Educational
- **Scope**: Advanced Data Structure Implementation
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Data Structure**: Doubly Linked Lists
- **Style Guide**: Betty

## Demonstrated Competencies
- Doubly linked list implementation
- Bidirectional traversal techniques
- Node insertion at various positions
- Node deletion with pointer management
- Memory allocation for complex structures
- Two-way pointer manipulation
- List sorting algorithms
- List integrity verification
- Palindrome detection in lists
- Cryptographic challenges

## System Context
This module explores doubly linked lists, an advanced data structure that extends singly linked lists by allowing bidirectional traversal. Doubly linked lists are essential for applications requiring efficient navigation in both directions, such as browser history, text editors, and navigation systems.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Text Editor (vi/vim/emacs)
- Valgrind for memory leak detection
- Strong understanding of pointers and dynamic memory

## Development Workflow
1. Define doubly linked list structure with previous and next pointers
2. Implement functions for list operations
3. Manage bidirectional pointer relationships
4. Create insertion algorithms for various positions
5. Develop safe deletion algorithms
6. Test traversal in both directions
7. Implement advanced operations like sorting
8. Verify memory management during all operations
9. Apply list structure to solve complex problems

## Implementation Specifics

### Core Data Structure
- **List Definition**: [lists.h](./lists.h) - Defines the dlistint_t structure and function prototypes

### Basic List Operations
- **List Printing**: [0-print_dlistint.c](./0-print_dlistint.c) - Prints all elements of a doubly linked list
- **List Length**: [1-dlistint_len.c](./1-dlistint_len.c) - Returns the number of elements in a linked list

### Node Addition
- **Add Node**: [2-add_dnodeint.c](./2-add_dnodeint.c) - Adds a new node at the beginning of a list
- **Append Node**: [3-add_dnodeint_end.c](./3-add_dnodeint_end.c) - Adds a new node at the end of a list

### Node Access and Modification
- **Get Node**: [4-free_dlistint.c](./4-free_dlistint.c) - Frees a doubly linked list
- **Get Node at Index**: [5-get_dnodeint.c](./5-get_dnodeint.c) - Returns the nth node of a doubly linked list
- **List Sum**: [6-sum_dlistint.c](./6-sum_dlistint.c) - Returns the sum of all data in a linked list

### Advanced Operations
- **Insert at Index**: [7-insert_dnodeint.c](./7-insert_dnodeint.c) - Inserts a new node at a given position
- **Delete at Index**: [8-delete_dnodeint.c](./8-delete_dnodeint.c) - Deletes the node at a specific index

### Cryptographic Challenges
- **Password Finding**: [100-password](./100-password) - Contains the password for crackme4
- **Largest Palindrome**: [102-result](./102-result) - Contains the largest palindrome made from product of two 3-digit numbers
- **Keygen**: [103-keygen.c](./103-keygen.c) - Generates a key for crackme5

## Learning Outcomes
- Implementing doubly linked list data structures
- Managing bidirectional pointer relationships
- Creating efficient insertion and deletion algorithms
- Traversing lists in both directions
- Developing safe memory management for complex structures
- Applying linked lists to solve algorithmic challenges
- Optimizing operations for doubly linked structures
- Understanding the trade-offs between different linked list types
- Implementing advanced list operations like sorting