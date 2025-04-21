# Project Manifest: More Singly Linked Lists in C

## Project Identity
- **Name**: More Singly Linked Lists
- **Type**: Educational
- **Scope**: Advanced Linked List Operations
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Data Structure**: Singly Linked Lists
- **Style Guide**: Betty

## Demonstrated Competencies
- Advanced linked list manipulation
- Node deletion at specific positions
- List reversal algorithms
- Cycle detection in linked lists
- Index-based node access and manipulation
- Safe memory management practices
- Complex pointer operations
- Recursive list operations
- List element filtering
- Error handling in list operations

## System Context
This module builds on the previous singly linked lists concepts to explore more complex operations and algorithms. Advanced linked list manipulations are essential for efficient data management and serve as a foundation for understanding more sophisticated data structures and algorithms.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Text Editor (vi/vim/emacs)
- Valgrind for memory leak detection
- Strong understanding of pointers and linked lists

## Development Workflow
1. Analyze advanced linked list operation requirements
2. Implement functions for complex list manipulations
3. Ensure proper memory management during operations
4. Handle edge cases and error conditions
5. Test with various list configurations
6. Verify memory integrity after operations
7. Optimize algorithms for efficiency
8. Document function behavior and limitations

## Implementation Specifics

### Core Data Structure
- **List Definition**: [lists.h](./lists.h) - Defines the listint_t structure and function prototypes

### Basic List Operations
- **List Printing**: [0-print_listint.c](./0-print_listint.c) - Prints all elements of a linked list
- **List Length**: [1-listint_len.c](./1-listint_len.c) - Returns the number of elements in a linked list

### Node Addition
- **Add Node**: [2-add_nodeint.c](./2-add_nodeint.c) - Adds a new node at the beginning of a list
- **Append Node**: [3-add_nodeint_end.c](./3-add_nodeint_end.c) - Adds a new node at the end of a list

### Memory Management
- **Free List**: [4-free_listint.c](./4-free_listint.c) - Frees all nodes of a list
- **Free with Reset**: [5-free_listint2.c](./5-free_listint2.c) - Frees a list and sets the head to NULL

### Node Deletion
- **Delete Head**: [6-pop_listint.c](./6-pop_listint.c) - Deletes the head node and returns its data
- **Get Node**: [7-get_nodeint.c](./7-get_nodeint.c) - Returns the nth node of a linked list
- **List Sum**: [8-sum_listint.c](./8-sum_listint.c) - Returns the sum of all data in a linked list
- **Insert Node**: [9-insert_nodeint.c](./9-insert_nodeint.c) - Inserts a new node at a given position
- **Delete at Index**: [10-delete_nodeint.c](./10-delete_nodeint.c) - Deletes the node at a specific index

### Advanced Operations
- **List Reversal**: [100-reverse_listint.c](./100-reverse_listint.c) - Reverses a linked list
- **Print Safe**: [101-print_listint_safe.c](./101-print_listint_safe.c) - Prints a list safely, even with cycles
- **Free Safe**: [102-free_listint_safe.c](./102-free_listint_safe.c) - Frees a list safely, even with cycles
- **Find Loop**: [103-find_loop.c](./103-find_loop.c) - Finds the loop in a linked list

## Learning Outcomes
- Implementing advanced linked list operations
- Managing memory safely in complex list manipulations
- Detecting and handling cycles in linked lists
- Applying algorithms for list reversal and node manipulation
- Using index-based access in linked structures
- Implementing proper error handling for list operations
- Optimizing list traversal for specific operations
- Understanding advanced pointer manipulation techniques