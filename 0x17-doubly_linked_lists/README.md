# Doubly Linked Lists

This directory contains implementations of doubly linked lists in C, focusing on bidirectional node connections, advanced list operations, and memory management.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Understand the structure and advantages of doubly linked lists
- Implement bidirectional traversal through linked data
- Apply proper memory management techniques for complex data structures
- Create and manipulate doubly linked list nodes
- Design efficient algorithms for insertion and deletion at any position
- Implement advanced operations like list reversal and sorting
- Analyze the performance characteristics of doubly linked lists
- Solve algorithmic challenges using doubly linked lists

## What is a Doubly Linked List?

A doubly linked list is a data structure consisting of a sequence of elements, where each element (node) contains:
- Data
- A pointer to the next node in the sequence
- A pointer to the previous node in the sequence

This bidirectional connection allows traversal in both forward and backward directions.

## Advantages of Doubly Linked Lists

- **Bidirectional Traversal**: Ability to navigate both forward and backward
- **Efficient Insertions/Deletions**: O(1) time complexity for insertions and deletions at any position when a pointer to the node is available
- **Easy Implementation of Various Algorithms**: Simpler implementation of certain algorithms like LRU cache
- **Deletion Efficiency**: Deleting a node is more efficient than in a singly linked list as we don't need to traverse to find the previous node

## Structure of a Doubly Linked List

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Basic Operations

### Traversal
- Forward traversal: Start at head, follow `next` pointers
- Backward traversal: Start at tail, follow `prev` pointers

### Insertion
1. **At the beginning**: Update head's `prev` pointer and new node's `next` pointer
2. **At the end**: Update tail's `next` pointer and new node's `prev` pointer
3. **At a specific position**: Update `next` and `prev` pointers of adjacent nodes

### Deletion
1. Update `next` pointer of the previous node
2. Update `prev` pointer of the next node
3. Free the node to be deleted

## Project Files

### List Operations
- **[0-print_dlistint.c](./0-print_dlistint.c)**: Prints all elements and returns the number of nodes
- **[1-dlistint_len.c](./1-dlistint_len.c)**: Returns the number of elements in the list
- **[2-add_dnodeint.c](./2-add_dnodeint.c)**: Adds a new node at the beginning of the list
- **[3-add_dnodeint_end.c](./3-add_dnodeint_end.c)**: Adds a new node at the end of the list
- **[4-free_dlistint.c](./4-free_dlistint.c)**: Frees all nodes from memory
- **[5-get_dnodeint.c](./5-get_dnodeint.c)**: Returns the nth node of the list
- **[6-sum_dlistint.c](./6-sum_dlistint.c)**: Returns the sum of all data (n) in the list
- **[7-insert_dnodeint.c](./7-insert_dnodeint.c)**: Inserts a new node at a given position
- **[8-delete_dnodeint.c](./8-delete_dnodeint.c)**: Deletes the node at a given index

### Advanced Challenges
- **[100-password](./100-password)**: Password for the crackme4 program
- **[102-result](./102-result)**: Contains the largest palindrome made from product of two 3-digit numbers
- **[103-keygen.c](./103-keygen.c)**: Generates a key for the crackme5 program

## Usage Examples

### Creating and Traversing a List

```c
#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;
    
    /* Add nodes to the list */
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    
    /* Print the list */
    print_dlistint(head);
    
    /* Get the length of the list */
    size_t len = dlistint_len(head);
    printf("List length: %lu\n", len);
    
    /* Free the list */
    free_dlistint(head);
    
    return (0);
}
```

### Inserting and Deleting Nodes

```c
#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;
    
    /* Create a list: 1 -> 2 -> 3 -> 4 */
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    
    /* Insert a node (99) at index 2 */
    insert_dnodeint_at_index(&head, 2, 99);
    /* List becomes: 1 -> 2 -> 99 -> 3 -> 4 */
    
    /* Delete node at index 3 */
    delete_dnodeint_at_index(&head, 3);
    /* List becomes: 1 -> 2 -> 99 -> 4 */
    
    /* Print the list */
    print_dlistint(head);
    
    /* Free the list */
    free_dlistint(head);
    
    return (0);
}
```

## Time Complexity Analysis

| Operation | Time Complexity |
|-----------|----------------|
| Access | O(n) |
| Search | O(n) |
| Insertion (at beginning/end) | O(1) |
| Insertion (at middle) | O(n) to find position, O(1) to insert |
| Deletion (at beginning/end) | O(1) |
| Deletion (at middle) | O(n) to find position, O(1) to delete |

## Memory Management

Proper memory management is crucial when working with doubly linked lists:

1. **Allocation**: Use `malloc()` to allocate memory for each node
2. **Initialization**: Set the data and pointers properly to avoid dangling pointers
3. **Deallocation**: Use `free()` to free each node when it's no longer needed
4. **Prevent Memory Leaks**: Ensure all nodes are freed before program termination

```c
/* Example of proper memory management */
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
    return (NULL);

new_node->n = data;
new_node->prev = NULL;
new_node->next = NULL;

/* Use the node... */

/* When done, free the node */
free(new_node);
```

## Common Mistakes to Avoid

1. **Losing the Head Pointer**: Always keep track of the head pointer
2. **Incorrect Pointer Updates**: When inserting or deleting, ensure all pointers are correctly updated
3. **Memory Leaks**: Make sure to free all nodes when they're no longer needed
4. **Null Pointer Access**: Always check for NULL before dereferencing pointers
5. **Not Handling Edge Cases**: Consider empty lists and operations at the beginning/end of the list

## Compilation

All files should be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_file
```

## Additional Resources

- [Doubly Linked List - Wikipedia](https://en.wikipedia.org/wiki/Doubly_linked_list)
- [Doubly Linked List in C - GeeksforGeeks](https://www.geeksforgeeks.org/doubly-linked-list/)
- [Introduction to Linked Lists - YouTube](https://www.youtube.com/watch?v=R9PTBwOzceo)
- [Visualizing Doubly Linked Lists - Visualization Tool](https://visualgo.net/en/list)
