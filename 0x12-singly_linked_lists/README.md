# Singly Linked Lists

This directory contains implementations of singly linked lists in C, focusing on the fundamental concepts of node-based data structures, dynamic memory allocation, and pointer manipulation.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Understand the concept and structure of linked lists
- Implement basic linked list operations (creation, traversal, insertion, deletion)
- Apply proper memory management techniques for dynamic data structures
- Use pointers to navigate and manipulate linked data
- Compare linked lists with arrays and understand their respective advantages
- Design functions that operate on linked data structures
- Apply proper coding style and documentation practices
- Create reusable and modular linked list implementations

## What is a Singly Linked List?

A singly linked list is a linear data structure consisting of a sequence of elements called nodes. Each node contains two parts:
1. **Data**: The actual value or information stored in the node
2. **Next Pointer**: A reference to the next node in the sequence

The list is accessed through a pointer to the first node, called the "head." The last node points to NULL, indicating the end of the list.

## Basic Structure

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Project Files

- **[0-print_list.c](./0-print_list.c)**: Prints all elements of a list and returns the number of nodes
- **[1-list_len.c](./1-list_len.c)**: Returns the number of elements in a linked list
- **[2-add_node.c](./2-add_node.c)**: Adds a new node at the beginning of a list
- **[3-add_node_end.c](./3-add_node_end.c)**: Adds a new node at the end of a list
- **[4-free_list.c](./4-free_list.c)**: Frees all nodes of a list
- **[100-first.c](./100-first.c)**: Prints a message before the main function is executed
- **[101-hello_holberton.asm](./101-hello_holberton.asm)**: Assembly program that prints a message

## Core Operations

### Traversing a List

```c
/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);
        
        h = h->next;
        count++;
    }

    return (count);
}
```

### Creating a New Node

```c
/**
 * create_node - Creates a new list_t node
 * @str: String to be duplicated and stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
list_t *create_node(const char *str)
{
    list_t *new_node;
    unsigned int len = 0;

    /* Calculate string length */
    while (str && str[len])
        len++;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* Duplicate string */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Set the other fields */
    new_node->len = len;
    new_node->next = NULL;

    return (new_node);
}
```

### Adding a Node at the Beginning

```c
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (head == NULL)
        return (NULL);

    /* Create a new node */
    new_node = create_node(str);
    if (new_node == NULL)
        return (NULL);

    /* Insert at the beginning */
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
```

### Adding a Node at the End

```c
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;

    if (head == NULL)
        return (NULL);

    /* Create a new node */
    new_node = create_node(str);
    if (new_node == NULL)
        return (NULL);

    /* If the list is empty, new node becomes the head */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Traverse to the last node */
    temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    /* Add new node at the end */
    temp->next = new_node;

    return (new_node);
}
```

### Freeing a List

```c
/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
    list_t *current, *next_node;

    current = head;
    while (current != NULL)
    {
        next_node = current->next;  /* Save next node before freeing current */
        free(current->str);         /* Free the string */
        free(current);              /* Free the node */
        current = next_node;        /* Move to the next node */
    }
}
```

## Linked Lists vs Arrays

| Feature | Linked Lists | Arrays |
|---------|--------------|--------|
| Memory Allocation | Dynamic (Runtime) | Static (Compile-time) for fixed arrays |
| Memory Layout | Non-contiguous | Contiguous |
| Size Flexibility | Can grow or shrink | Fixed size (unless using dynamic arrays) |
| Element Access | O(n) | O(1) |
| Insertion/Deletion | O(1) if position is known | O(n) for shifting elements |
| Memory Efficiency | Lower (extra pointer storage) | Higher (just data) |

## Function Attributes - Constructor and Destructor

The project also explores the use of GCC's constructor and destructor attributes:

```c
/**
 * before_main - Function executed before main
 *
 * Description: The constructor attribute causes the function to be called
 * automatically before main() is executed.
 */
void __attribute__((constructor)) before_main(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
```

## Memory Management

Proper memory management is crucial when working with linked lists:

1. **Allocation**: Use `malloc()` to allocate memory for each node
2. **String Duplication**: Use `strdup()` to copy strings
3. **Deallocation**: Use `free()` to release memory for both the string and the node structure
4. **Preventing Memory Leaks**: Ensure all allocated memory is freed when no longer needed
5. **NULL Safety**: Always check for NULL pointers before dereferencing
6. **Clean Exit**: Free all resources before exiting in error conditions

## Implementation Tips

1. **Pointer to Pointer**: Use double pointers (`list_t **head`) to modify the head pointer
2. **Helper Functions**: Create utility functions like `create_node()` to avoid code duplication
3. **Edge Cases**: Handle empty lists and single-node lists carefully
4. **Iteration Technique**: Use a temporary pointer for traversal to preserve the head
5. **Proper Initialization**: Always initialize new nodes' pointers properly

## Compilation

All files should be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_file
```

For the assembly program:

```bash
nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
```

## Additional Resources

- [Linked Lists - GeeksforGeeks](https://www.geeksforgeeks.org/linked-list-set-1-introduction/)
- [Linked List vs Array - GeeksforGeeks](https://www.geeksforgeeks.org/linked-list-vs-array/)
- [Understanding and Using Linked Lists in C - Tutorialspoint](https://www.tutorialspoint.com/data_structures_algorithms/linked_list_algorithms.htm)
- [Constructor and Destructor in GCC - IBM Documentation](https://www.ibm.com/docs/en/xl-c-and-cpp-aix/16.1.0?topic=attributes-constructor-destructor)
