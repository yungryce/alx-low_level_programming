# Search Algorithms

This directory contains implementations of various search algorithms in C, focusing on efficiency, complexity analysis, and practical applications.

## Learning Objectives

By completing the exercises in this directory, you will be able to:
- Implement common search algorithms in C
- Analyze and understand time and space complexity
- Choose the most appropriate search algorithm for specific scenarios
- Apply Big O notation to evaluate algorithm efficiency
- Compare performance characteristics of different search techniques
- Understand the trade-offs between time and space complexity

## Search Algorithm Types

### Linear Search
- **Implementation**: [0-linear.c](./0-linear.c)
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)
- **Description**: Sequentially checks each element until finding the target value

### Binary Search
- **Implementation**: [1-binary.c](./1-binary.c)
- **Time Complexity**: O(log n)
- **Space Complexity**: O(1) for iterative, O(log n) for recursive
- **Description**: Divides the search interval in half with each comparison
- **Requirements**: Sorted array

### Jump Search
- **Implementation**: [100-jump.c](./100-jump.c)
- **Time Complexity**: O(√n)
- **Space Complexity**: O(1)
- **Description**: Jumps fixed steps ahead and then performs linear search
- **Requirements**: Sorted array

### Interpolation Search
- **Implementation**: [102-interpolation.c](./102-interpolation.c)
- **Time Complexity**: O(log log n) average case, O(n) worst case
- **Space Complexity**: O(1)
- **Description**: Uses position formula based on values to guess target location
- **Requirements**: Sorted array with uniformly distributed values

### Exponential Search
- **Implementation**: [103-exponential.c](./103-exponential.c)
- **Time Complexity**: O(log n)
- **Space Complexity**: O(1)
- **Description**: Exponentially increases search range then performs binary search
- **Requirements**: Sorted array

### Advanced Implementations
- **First Occurrence**: [104-advanced_binary.c](./104-advanced_binary.c) - Finds first occurrence of value in sorted array
- **Jump List**: [105-jump_list.c](./105-jump_list.c) - Jump search for singly linked lists
- **Linear Skip**: [106-linear_skip.c](./106-linear_skip.c) - Skip list search implementation

## Complexity Analysis

This module includes time and space complexity analysis files for various algorithms:
- [0-O](./0-O) - Linear search
- [1-O](./1-O) - Binary search
- [2-O](./2-O) - Space complexity of iterative linear search
- [3-O](./3-O) - Space complexity of binary search
- [4-O](./4-O) - Space complexity of printing an array
- [5-O](./5-O) - Space complexity of printing a linked list
- [6-O](./6-O) - Space complexity of allocating a 2D array

## Usage Examples

### Linear Search

```c
#include "search_algos.h"

int main(void)
{
    int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

### Binary Search

```c
#include "search_algos.h"

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n", 5, binary_search(array, size, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

## Key Concepts

### Space Complexity
The amount of memory used by an algorithm to complete its execution, measured in terms of additional space required beyond the input storage.

### Time Complexity
The amount of time required by an algorithm to complete its execution, usually measured as a function of the input size.

### Big O Notation
A mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity.

### Algorithm Selection Criteria
- Data structure being searched (array, linked list, tree)
- Whether the data is sorted
- Size of the data set
- Distribution of the data
- Frequency of searches performed

## Compilation

All files are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_file
```

## Additional Resources

- [Search Algorithm - Wikipedia](https://en.wikipedia.org/wiki/Search_algorithm)
- [Big O Notation - GeeksforGeeks](https://www.geeksforgeeks.org/analysis-algorithms-big-o-analysis/)
- [Linear Search vs Binary Search](https://www.geeksforgeeks.org/linear-search-vs-binary-search/)
- [Jump Search Algorithm](https://www.geeksforgeeks.org/jump-search/)
- [Interpolation Search Algorithm](https://www.geeksforgeeks.org/interpolation-search/)
