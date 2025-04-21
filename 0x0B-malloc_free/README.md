# Dynamic Memory Allocation with malloc and free

This directory contains exercises focusing on dynamic memory allocation in C using `malloc()` and `free()` functions, essential techniques for creating flexible and efficient programs.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Understand the difference between automatic and dynamic allocation
- Use `malloc()` and `free()` functions properly
- Implement dynamic arrays and strings
- Apply proper memory management techniques
- Identify and prevent memory leaks
- Create multi-dimensional arrays dynamically
- Handle memory allocation failures
- Design functions that allocate memory for complex data structures

## What is Dynamic Memory Allocation?

Dynamic memory allocation allows programs to request memory during runtime rather than having all memory requirements determined at compile time. This provides flexibility to create data structures whose size is determined at runtime.

## Memory Regions

In C programs, memory is typically divided into several regions:
- **Stack**: Used for automatic variables with block scope
- **Heap**: Used for dynamically allocated memory
- **Data/BSS Segment**: For global and static variables
- **Code/Text Segment**: For program instructions

Dynamic allocation uses the heap memory region.

## Key Functions

### malloc()

The `malloc()` function allocates a block of uninitialized memory:

```c
void *malloc(size_t size);
```

- **Purpose**: Allocates `size` bytes of memory
- **Returns**: Pointer to the allocated memory, or NULL if the allocation fails
- **Header**: `#include <stdlib.h>`

### free()

The `free()` function deallocates previously allocated memory:

```c
void free(void *ptr);
```

- **Purpose**: Releases memory pointed to by `ptr`
- **Returns**: Nothing (void)
- **Header**: `#include <stdlib.h>`

## Project Files

- **[0-create_array.c](./0-create_array.c)**: Creates an array of chars and initializes it with a specific char
- **[1-strdup.c](./1-strdup.c)**: Returns a pointer to a newly allocated space in memory containing a copy of a string
- **[2-str_concat.c](./2-str_concat.c)**: Concatenates two strings into a newly allocated memory space
- **[3-alloc_grid.c](./3-alloc_grid.c)**: Returns a pointer to a 2D array of integers
- **[4-free_grid.c](./4-free_grid.c)**: Frees a 2D grid previously created by `alloc_grid`
- **[100-argstostr.c](./100-argstostr.c)**: Concatenates all the arguments of a program
- **[101-strtow.c](./101-strtow.c)**: Splits a string into words

## Implementation Examples

### Creating a Dynamically Allocated Array

```c
/**
 * create_array - Creates an array of chars and initializes it
 * @size: Size of the array
 * @c: Char to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    if (size == 0)
        return (NULL);

    /* Allocate memory for the array */
    array = malloc(size * sizeof(char));
    if (array == NULL)
        return (NULL);

    /* Initialize the array with the provided character */
    for (i = 0; i < size; i++)
        array[i] = c;

    return (array);
}
```

### Dynamic String Duplication

```c
/**
 * _strdup - Duplicates a string
 * @str: String to duplicate
 *
 * Return: Pointer to the new string, or NULL if it fails
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int i, len = 0;

    if (str == NULL)
        return (NULL);

    /* Calculate string length */
    while (str[len])
        len++;

    /* Allocate memory for the new string (plus null terminator) */
    dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return (NULL);

    /* Copy the string */
    for (i = 0; i <= len; i++)
        dup[i] = str[i];

    return (dup);
}
```

## Memory Management Best Practices

1. **Always check allocation success**: Always check if `malloc()` returns NULL, which indicates allocation failure.
2. **Proper deallocation**: Always use `free()` to release memory that is no longer needed.
3. **Avoid memory leaks**: Ensure that all dynamically allocated memory is freed before the program terminates.
4. **Avoid double free**: Never free the same memory block twice.
5. **Avoid dangling pointers**: Set pointers to NULL after freeing them.
6. **Handle nested allocations**: When freeing complex structures, free nested allocations first.

## Potential Issues

### Memory Leaks

A memory leak occurs when allocated memory is not freed, causing a program to consume more memory over time:

```c
void memory_leak_example(void)
{
    char *str = malloc(10 * sizeof(char));
    /* str is never freed, causing a memory leak */
}
```

### Dangling Pointers

A dangling pointer points to memory that has been freed:

```c
void dangling_pointer_example(void)
{
    char *str = malloc(10 * sizeof(char));
    free(str);
    /* str is now a dangling pointer */
    str[0] = 'A'; /* This could cause unexpected behavior */
}
```

## Debugging Tools

- **Valgrind**: A powerful tool for detecting memory leaks and other memory errors
- **GDB**: Can be used to debug memory-related issues
- **ASAN**: Address Sanitizer for detecting memory errors

## Compilation

All files should be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_file
```

## Additional Resources

- [Dynamic Memory Allocation in C - GeeksforGeeks](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [Understanding and Avoiding Memory Leaks in C](https://www.ibm.com/developerworks/library/l-memory-leaks/index.html)
- [Valgrind Documentation](https://valgrind.org/docs/manual/quick-start.html)
