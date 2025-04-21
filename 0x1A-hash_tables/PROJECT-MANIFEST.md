# Project Manifest: Hash Tables in C

## Project Identity
- **Name**: Hash Tables
- **Type**: Educational
- **Scope**: Hash Table Implementation and Usage
- **Status**: Completed

## Technology Signature
- **Core**: C Language (C99)
- **Compiler**: GCC
- **Data Structure**: Hash Tables
- **Style Guide**: Betty

## Demonstrated Competencies
- Hash table implementation from scratch
- Hash function design and evaluation
- Collision resolution using chaining
- Dynamic memory management for complex structures
- Key-value pair handling
- Hash table operations (insert, retrieve, delete)
- Algorithm complexity analysis
- Sorted hash table implementation
- Pointer manipulation for linked lists

## System Context
This module explores hash tables, a fundamental data structure that provides average O(1) time complexity for lookups, insertions, and deletions. Hash tables are essential in computer science for implementing associative arrays, database indexing, caching, and set operations.

## Development Requirements
- Linux/Unix-based Operating System
- GCC Compiler
- Text Editor (vi/vim/emacs)
- Valgrind for memory analysis

## Development Workflow
1. Design hash function algorithms
2. Implement core hash table data structures
3. Develop key operations (create, set, get, delete)
4. Test with various key distributions
5. Handle collision scenarios
6. Implement ordered traversal (for PHP-like hash tables)
7. Analyze performance and memory usage
8. Ensure proper memory management and cleanup

## Implementation Specifics

### Core Hash Table Components
- **Data Structures**: [hash_tables.h](./hash_tables.h) - Defines hash table structures and function prototypes
- **Table Creation**: [0-hash_table_create.c](./0-hash_table_create.c) - Creates a hash table of specified size
- **Hash Function**: [1-djb2.c](./1-djb2.c) - Implements the djb2 hash algorithm

### Basic Operations
- **Index Calculation**: [2-key_index.c](./2-key_index.c) - Maps a key to an index in the hash table array
- **Key-Value Setting**: [3-hash_table_set.c](./3-hash_table_set.c) - Adds or updates an element in the hash table
- **Value Retrieval**: [4-hash_table_get.c](./4-hash_table_get.c) - Retrieves a value associated with a key
- **Table Printing**: [5-hash_table_print.c](./5-hash_table_print.c) - Prints the hash table contents
- **Table Deletion**: [6-hash_table_delete.c](./6-hash_table_delete.c) - Frees all memory used by the hash table

### Advanced Hash Table (PHP-like)
- **Sorted Hash Table**: [100-sorted_hash_table.c](./100-sorted_hash_table.c) - Implements a hash table with sorted linked lists

## Learning Outcomes
- Understanding hash table concepts and advantages
- Implementing efficient hash functions
- Managing collisions in hash tables
- Creating a complete ADT (Abstract Data Type) in C
- Handling dynamic memory for complex data structures
- Analyzing algorithm time and space complexity
- Implementing advanced data structure variations
- Applying hash tables to solve practical problems