# Hash Tables

This directory contains implementations of hash tables in C, exploring the concepts of key-value storage, collision handling, and efficient data retrieval.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Understand what hash tables are and how they work
- Implement hash functions that minimize collisions
- Handle collisions using chaining with linked lists
- Analyze the efficiency and performance of hash tables
- Determine when to use hash tables versus other data structures
- Apply hash tables to solve real-world problems
- Implement sorted hash tables for ordered data retrieval

## What is a Hash Table?

A hash table is a data structure that implements an associative array or dictionary. It maps keys to values by using a hash function to compute an index into an array of buckets, from which the desired value can be found.

## Key Components

### Hash Function
- Maps data of arbitrary size to fixed-size values
- A good hash function minimizes collisions
- Should distribute keys uniformly across the hash table

### Hash Table Operations
- **Insertion**: Add a key-value pair to the table
- **Deletion**: Remove a key-value pair from the table
- **Lookup**: Retrieve the value associated with a key
- **Update**: Modify the value associated with a key

### Collision Handling
- **Chaining**: Store multiple key-value pairs in the same bucket using linked lists
- **Open Addressing**: Find another position in the array when a collision occurs
- **Double Hashing**: Use a secondary hash function to resolve collisions

## Project Files

### Basic Hash Table Implementation
- **[0-hash_table_create.c](./0-hash_table_create.c)**: Creates a hash table of specified size
- **[1-djb2.c](./1-djb2.c)**: Implements the DJB2 hash function
- **[2-key_index.c](./2-key_index.c)**: Returns the index for a key
- **[3-hash_table_set.c](./3-hash_table_set.c)**: Adds or updates an element in the hash table
- **[4-hash_table_get.c](./4-hash_table_get.c)**: Retrieves a value associated with a key
- **[5-hash_table_print.c](./5-hash_table_print.c)**: Prints the hash table
- **[6-hash_table_delete.c](./6-hash_table_delete.c)**: Deletes a hash table

### Sorted Hash Table Implementation
- **[100-sorted_hash_table.c](./100-sorted_hash_table.c)**: Implements a hash table with sorted linked lists for ordered retrieval
- **[hash_tables.h](./hash_tables.h)**: Header file with function prototypes and data structures

## How Hash Tables Work

1. **Key Generation**: A key (string, number, etc.) is provided to store or retrieve data
2. **Hashing**: The key is passed through a hash function to generate a hash code
3. **Index Calculation**: The hash code is converted to an index in the array
4. **Collision Resolution**: If multiple keys map to the same index, a mechanism resolves the collision
5. **Storage/Retrieval**: The key-value pair is stored at or retrieved from the calculated position

## The DJB2 Hash Function

The DJB2 algorithm is a popular hash function created by Daniel J. Bernstein:

```c
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return (hash);
}
```

This function produces a unique hash value for each string with minimal collisions.

## Usage Examples

### Creating and Using a Hash Table

```c
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");

    value = hash_table_get(ht, "python");
    printf("%s:%s\n", "python", value);
    
    hash_table_print(ht);
    hash_table_delete(ht);
    
    return (EXIT_SUCCESS);
}
```

### Using Sorted Hash Tables

Sorted hash tables maintain key-value pairs in alphabetical order by key, enabling ordered traversal:

```c
shash_table_t *ht;

ht = shash_table_create(1024);
shash_table_set(ht, "y", "0");
shash_table_set(ht, "j", "1");
shash_table_set(ht, "c", "2");
shash_table_set(ht, "b", "3");
shash_table_set(ht, "z", "4");
shash_table_set(ht, "n", "5");
shash_table_set(ht, "a", "6");
shash_table_set(ht, "m", "7");

shash_table_print(ht);    // Prints in key order: a, b, c, j, m, n, y, z
shash_table_print_rev(ht); // Prints in reverse order: z, y, n, m, j, c, b, a
```

## Time Complexity

Hash tables provide average case O(1) time complexity for the following operations:
- Insertion
- Deletion
- Lookup

However, in the worst case (many collisions), these operations can degrade to O(n).

## When to Use Hash Tables

Hash tables are ideal when:
- Fast lookups, insertions, and deletions are required
- Data has unique identifiers (keys)
- Data ordering is not important (except for sorted hash tables)
- Memory usage can be predicted

## Common Applications

- Database indexing
- Caching
- Symbol tables in compilers
- Associative arrays
- Spell checkers
- Password verification

## Compilation

All files are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hash_tables
```

## Additional Resources

- [Hash Table - Wikipedia](https://en.wikipedia.org/wiki/Hash_table)
- [Hash Function - Wikipedia](https://en.wikipedia.org/wiki/Hash_function)
- [Hash Table Implementation in C - GeeksforGeeks](https://www.geeksforgeeks.org/hash-table-data-structure/)
- [Dictionary in Python - Python Docs](https://docs.python.org/3/tutorial/datastructures.html#dictionaries)

