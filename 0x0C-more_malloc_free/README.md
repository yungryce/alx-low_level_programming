# Advanced Dynamic Memory Allocation in C

This directory contains exercises focused on advanced memory allocation techniques in C using `malloc`, `calloc`, `realloc`, and `free` functions to manage memory efficiently and safely.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Use `calloc()` for zero-initialized memory allocation
- Implement `realloc()` for dynamic memory resizing
- Apply proper memory management techniques for complex data structures
- Handle memory allocation failures robustly
- Create functions that allocate multi-dimensional arrays
- Optimize memory usage in your programs
- Recognize and prevent memory leaks and fragmentation
- Develop a deep understanding of dynamic memory allocation patterns

## Memory Management Functions

### `malloc()`
Allocates a specified number of bytes and returns a pointer to the allocated memory:
```c
void *malloc(size_t size);
```

### `calloc()`
Allocates memory for an array of elements, initializes the memory to zero, and returns a pointer:
```c
void *calloc(size_t nmemb, size_t size);
```

### `realloc()`
Changes the size of a previously allocated memory block:
```c
void *realloc(void *ptr, size_t size);
```

### `free()`
Deallocates memory previously allocated by `malloc()`, `calloc()`, or `realloc()`:
```c
void free(void *ptr);
```

## Project Files

- **[0-malloc_checked.c](./0-malloc_checked.c)**: Allocates memory using `malloc` with error handling
- **[1-string_nconcat.c](./1-string_nconcat.c)**: Concatenates two strings with a limit on the second string
- **[2-calloc.c](./2-calloc.c)**: Implements a custom version of the `calloc` function
- **[3-array_range.c](./3-array_range.c)**: Creates an array containing a range of values
- **[100-realloc.c](./100-realloc.c)**: Implements a custom version of the `realloc` function
- **[101-mul.c](./101-mul.c)**: Multiplies two positive numbers received as command line arguments

## Key Concepts

### Memory Allocation with Error Handling

Always check if memory allocation was successful before using the allocated memory:

```c
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    
    if (ptr == NULL)
        exit(98);
        
    return (ptr);
}
```

### String Concatenation with Limited Length

When concatenating strings with a size limit, carefully manage buffer sizes:

```c
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int i, j, len1 = 0, len2 = 0;
    
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
        
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;
        
    if (n >= len2)
        n = len2;
        
    concat = malloc(sizeof(char) * (len1 + n + 1));
    if (concat == NULL)
        return (NULL);
        
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];
    for (j = 0; j < n; j++, i++)
        concat[i] = s2[j];
        
    concat[i] = '\0';
    return (concat);
}
```

### Custom Implementation of `calloc`

Understanding how `calloc` works internally:

```c
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i;
    unsigned char *bytePtr;
    
    if (nmemb == 0 || size == 0)
        return (NULL);
        
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);
        
    /* Initialize the allocated memory to zero */
    bytePtr = ptr;
    for (i = 0; i < (nmemb * size); i++)
        bytePtr[i] = 0;
        
    return (ptr);
}
```

### Array Range Creation

Creating an array that contains all values from min to max:

```c
int *array_range(int min, int max)
{
    int *arr;
    int i, size;
    
    if (min > max)
        return (NULL);
        
    size = max - min + 1;
    arr = malloc(sizeof(int) * size);
    if (arr == NULL)
        return (NULL);
        
    for (i = 0; i < size; i++)
        arr[i] = min + i;
        
    return (arr);
}
```

### Custom Implementation of `realloc`

Understanding how `realloc` works internally:

```c
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int i, copy_size;
    char *char_ptr, *char_new_ptr;
    
    if (new_size == old_size)
        return (ptr);
        
    if (ptr == NULL)
        return (malloc(new_size));
        
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }
    
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);
        
    char_ptr = ptr;
    char_new_ptr = new_ptr;
    
    copy_size = (old_size < new_size) ? old_size : new_size;
    for (i = 0; i < copy_size; i++)
        char_new_ptr[i] = char_ptr[i];
        
    free(ptr);
    return (new_ptr);
}
```

## Best Practices in Memory Management

1. **Always Check Allocation Results**: Verify that `malloc()`, `calloc()`, or `realloc()` returned a valid pointer
2. **Handle NULL Pointers**: Always check if input pointers are NULL before dereferencing them
3. **Free When Done**: Always free dynamically allocated memory when it is no longer needed
4. **Free on Error Paths**: Release allocated memory when an error occurs to prevent memory leaks
5. **NULL After Free**: Set pointers to NULL after freeing them to prevent use-after-free errors
6. **Size Calculation**: Be careful with size calculations; incorrect sizes can lead to buffer overflows or underutilization
7. **Boundary Validation**: Ensure array indices and pointer arithmetic remain within allocated boundaries

## Memory-Related Issues

### Memory Leaks

A memory leak occurs when memory is allocated but never freed, causing the program to gradually consume more memory:

```c
void memory_leak_example(void)
{
    char *str = malloc(10);
    
    str = "Hello";  /* Original allocation is lost, causing a memory leak */
    
    /* Correct approach would be: */
    /* strcpy(str, "Hello"); */
}
```

### Double Free

Freeing memory that has already been freed can cause program crashes or corruption:

```c
void double_free_example(void)
{
    int *ptr = malloc(sizeof(int));
    
    free(ptr);
    free(ptr);  /* Double free - this is an error */
}
```

### Buffer Overflow

Writing beyond the boundaries of allocated memory can corrupt adjacent memory or cause crashes:

```c
void buffer_overflow_example(void)
{
    char *buffer = malloc(5);
    
    strcpy(buffer, "This string is too long for the buffer");  /* Buffer overflow */
}
```

## Debugging Memory Issues

1. **Valgrind**: A powerful tool for detecting memory leaks, use-after-free, and other memory errors
   ```bash
   valgrind --leak-check=full ./your_program
   ```
   
2. **GDB**: Can be used to debug memory-related crashes and examine memory contents
   ```bash
   gdb ./your_program
   ```

3. **Custom Debugging**: Add print statements or logging to track allocations and deallocations

## Compilation

All files should be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_file
```

## Additional Resources

- [Dynamic Memory Allocation in C - GeeksforGeeks](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [Valgrind Documentation](https://valgrind.org/docs/manual/quick-start.html)
- [Common C Programming Mistakes - Memory Management](https://www.informit.com/articles/article.aspx?p=2036582&seqNum=3)
- [Memory Management in C Programming - IBM Documentation](https://www.ibm.com/docs/en/zos/2.3.0?topic=memory-using-c-memory-management-functions)

