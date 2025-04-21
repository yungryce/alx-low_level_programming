# More Singly Linked Lists

This directory contains advanced implementations and operations for singly linked lists in C, expanding on the fundamental concepts with more complex operations and memory management techniques.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Implement advanced operations on singly linked lists
- Apply proper memory management techniques for dynamic data structures
- Design and use various traversal algorithms
- Detect and handle cycles in linked lists
- Create efficient algorithms for list manipulation
- Implement recursive and iterative approaches to list operations
- Use temporary pointers and helper functions for complex operations
- Analyze and optimize linked list operations for efficiency

## What is a Singly Linked List?

A singly linked list is a data structure consisting of nodes where each node contains:
- Data (in this project, an integer)
- A pointer to the next node in the sequence

The list is accessed through a pointer to the first node (the head). The last node points to NULL, indicating the end of the list.

## Basic Structure

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Project Files

### List Traversal and Information
- **[0-print_listint.c](./0-print_listint.c)**: Prints all elements of a list and returns the number of nodes
- **[1-listint_len.c](./1-listint_len.c)**: Returns the number of elements in a linked list

### Node Management
- **[2-add_nodeint.c](./2-add_nodeint.c)**: Adds a new node at the beginning of a list
- **[3-add_nodeint_end.c](./3-add_nodeint_end.c)**: Adds a new node at the end of a list
- **[4-free_listint.c](./4-free_listint.c)**: Frees a list from memory
- **[5-free_listint2.c](./5-free_listint2.c)**: Frees a list and sets the head to NULL

### List Manipulation
- **[6-pop_listint.c](./6-pop_listint.c)**: Deletes the head node and returns its data
- **[7-get_nodeint.c](./7-get_nodeint.c)**: Returns the nth node of a list
- **[8-sum_listint.c](./8-sum_listint.c)**: Returns the sum of all data (n) in the list
- **[9-insert_nodeint.c](./9-insert_nodeint.c)**: Inserts a new node at a given position
- **[10-delete_nodeint.c](./10-delete_nodeint.c)**: Deletes a node at a specified index

### Advanced Operations
- **[100-reverse_listint.c](./100-reverse_listint.c)**: Reverses a linked list in place
- **[101-print_listint_safe.c](./101-print_listint_safe.c)**: Prints a list safely (handles loops)
- **[102-free_listint_safe.c](./102-free_listint_safe.c)**: Frees a list safely (handles loops)
- **[103-find_loop.c](./103-find_loop.c)**: Finds the loop in a linked list using Floyd's Cycle-Finding Algorithm

## Key Concepts

### Memory Management

Proper memory management is essential when working with linked lists to prevent memory leaks:

1. **Allocation**: Use `malloc()` to allocate memory for each new node
2. **Initialization**: Set the data and next pointer properly
3. **Deallocation**: Use `free()` to release memory when a node is no longer needed
4. **Cleanup**: Ensure all nodes are freed before the program terminates

```c
/* Example of proper node creation and memory management */
listint_t *create_node(int n)
{
    listint_t *new_node;
    
    /* Allocate memory */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
    
    /* Initialize node */
    new_node->n = n;
    new_node->next = NULL;
    
    return (new_node);
}

/* Example of proper list deallocation */
void free_listint(listint_t *head)
{
    listint_t *current, *temp;
    
    current = head;
    while (current != NULL)
    {
        temp = current->next;
        free(current);
        current = temp;
    }
}
```

### Node Insertion

Three common insertion scenarios:

1. **At the beginning**: Update the head pointer
   ```c
   listint_t *add_nodeint(listint_t **head, const int n)
   {
       listint_t *new_node;
       
       new_node = malloc(sizeof(listint_t));
       if (new_node == NULL)
           return (NULL);
           
       new_node->n = n;
       new_node->next = *head;
       *head = new_node;
       
       return (new_node);
   }
   ```

2. **At the end**: Traverse to the last node, then update its next pointer
   ```c
   listint_t *add_nodeint_end(listint_t **head, const int n)
   {
       listint_t *new_node, *temp;
       
       new_node = malloc(sizeof(listint_t));
       if (new_node == NULL)
           return (NULL);
           
       new_node->n = n;
       new_node->next = NULL;
       
       if (*head == NULL)
       {
           *head = new_node;
           return (new_node);
       }
       
       temp = *head;
       while (temp->next != NULL)
           temp = temp->next;
           
       temp->next = new_node;
       
       return (new_node);
   }
   ```

3. **At a specific position**: Traverse to the correct position, then update pointers
   ```c
   listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
   {
       listint_t *new_node, *temp;
       unsigned int i;
       
       if (head == NULL)
           return (NULL);
           
       new_node = malloc(sizeof(listint_t));
       if (new_node == NULL)
           return (NULL);
           
       new_node->n = n;
       
       if (idx == 0)
       {
           new_node->next = *head;
           *head = new_node;
           return (new_node);
       }
       
       temp = *head;
       for (i = 0; i < idx - 1 && temp != NULL; i++)
           temp = temp->next;
           
       if (temp == NULL)
       {
           free(new_node);
           return (NULL);
       }
       
       new_node->next = temp->next;
       temp->next = new_node;
       
       return (new_node);
   }
   ```

### Node Deletion

Three common deletion scenarios:

1. **At the beginning**: Update the head pointer
   ```c
   int pop_listint(listint_t **head)
   {
       listint_t *temp;
       int n;
       
       if (*head == NULL)
           return (0);
           
       temp = *head;
       n = temp->n;
       *head = temp->next;
       free(temp);
       
       return (n);
   }
   ```

2. **At a specific position**: Traverse to the correct position, then update pointers
   ```c
   int delete_nodeint_at_index(listint_t **head, unsigned int index)
   {
       listint_t *temp, *to_delete;
       unsigned int i;
       
       if (*head == NULL)
           return (-1);
           
       if (index == 0)
       {
           to_delete = *head;
           *head = (*head)->next;
           free(to_delete);
           return (1);
       }
       
       temp = *head;
       for (i = 0; i < index - 1 && temp != NULL; i++)
           temp = temp->next;
           
       if (temp == NULL || temp->next == NULL)
           return (-1);
           
       to_delete = temp->next;
       temp->next = to_delete->next;
       free(to_delete);
       
       return (1);
   }
   ```

### Cycle Detection

Floyd's Cycle-Finding Algorithm (Tortoise and Hare Algorithm) is used to detect cycles in linked lists:

```c
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow, *fast;
    
    if (head == NULL)
        return (NULL);
        
    slow = head;
    fast = head;
    
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast)  /* Cycle detected */
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return (slow);  /* Return meeting point (start of the loop) */
        }
    }
    
    return (NULL);  /* No cycle found */
}
```

### List Reversal

Reversing a linked list in place:

```c
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current = *head;
    listint_t *next = NULL;
    
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    *head = prev;
    return (*head);
}
```

## Time Complexity Analysis

| Operation | Time Complexity |
|-----------|----------------|
| Access | O(n) |
| Search | O(n) |
| Insertion (at beginning) | O(1) |
| Insertion (at end) | O(n) |
| Insertion (at position) | O(n) |
| Deletion (at beginning) | O(1) |
| Deletion (at end) | O(n) |
| Deletion (at position) | O(n) |

## Common Pitfalls to Avoid

1. **Losing the Head Pointer**: Always work with a copy of the head pointer when traversing
2. **Memory Leaks**: Ensure proper deallocation of all nodes
3. **Null Pointer Dereference**: Always check for NULL before dereferencing pointers
4. **Not Handling Edge Cases**: Consider empty lists and operations at the beginning/end
5. **Infinite Loops**: Be cautious with cycles in lists and ensure proper termination conditions

## Compilation

All files should be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_file
```

## Additional Resources

- [Linked List - Wikipedia](https://en.wikipedia.org/wiki/Linked_list)
- [Linked Lists in C - GeeksforGeeks](https://www.geeksforgeeks.org/linked-list-set-1-introduction/)
- [Detecting Cycles in Linked Lists - YouTube](https://www.youtube.com/watch?v=zbozWoMgKW0)
- [Visualizing Data Structures - Linked Lists](https://visualgo.net/en/list)
