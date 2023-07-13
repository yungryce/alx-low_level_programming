## Memory Management Functions - `calloc()`, `realloc()`, and `free()`

This README provides an overview of three important memory management functions in C: `calloc()`, `realloc()`, and `free()`. These functions are used to allocate and deallocate memory dynamically during the runtime of a program.

### `calloc()`

The `calloc()` function is used to allocate a block of memory for an array of elements, each with a specified size. It initializes the allocated memory block with zero. The syntax for `calloc()` is as follows:

```c
void* calloc(size_t num, size_t size);
```

- `num`: The number of elements to allocate.
- `size`: The size of each element.

The `calloc()` function returns a pointer to the allocated memory block, or `NULL` if the allocation fails. It automatically calculates the total size required for the requested number of elements and initializes the memory to zeros. This is useful when allocating memory for arrays or buffers that need to be initialized before use.

### `realloc()`

The `realloc()` function is used to change the size of a previously allocated memory block. It can be used to expand or shrink the size of the block. The syntax for `realloc()` is as follows:

```c
void* realloc(void* ptr, size_t size);
```

- `ptr`: A pointer to the previously allocated memory block. It can be a pointer returned by `malloc()`, `calloc()`, or `realloc()`.
- `size`: The new size of the memory block.

The `realloc()` function returns a pointer to the resized memory block. If the reallocation is successful, the contents of the original memory block are preserved up to the minimum of the old and new sizes. If the reallocation fails, `NULL` is returned, and the original memory block remains unchanged. It's important to note that if `realloc()` returns a new pointer, the old pointer should no longer be used.

### `free()`

The `free()` function is used to deallocate the memory block previously allocated using `malloc()`, `calloc()`, or `realloc()`. The syntax for `free()` is as follows:

```c
void free(void* ptr);
```

- `ptr`: A pointer to the memory block to deallocate.

The `free()` function releases the memory occupied by the specified memory block. It should only be called with a pointer that was previously returned by `malloc()`, `calloc()`, or `realloc()`. After calling `free()`, the memory block is no longer valid, and accessing it leads to undefined behavior.

### Example Usage:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	int* nums = (int*)calloc(5, sizeof(int));  // Allocating memory for an array of 5 integers

	// Checking if allocation was successful
	if (nums == NULL) {
    	printf("Memory allocation failed!\n");
    	return 1;
	}

	// Using the allocated memory
	for (int i = 0; i < 5; i++) {
    	nums[i] = i + 1;
    	printf("%d ", nums[i]);
	}
	printf("\n");

	// Resizing the allocated memory block
	int* resized_nums = (int*)realloc(nums, 10 * sizeof(int));
	if (resized_nums != NULL) {
    	nums = resized_nums;  // Update the pointer if reallocation was successful
	}

	// Using the resized memory block
	for (int i = 5; i < 10; i++) {
    	nums[i] = i + 1;
    	printf("%d ", nums[i]);
	}
	printf("\n");

	// Deallocating the memory block
	free(nums);
	nums = NULL;  // Set the pointer to NULL after deallocation

	return 0;
}
```

This example demonstrates the usage of `calloc()`, `realloc()`, and `free()`. The memory is first allocated using `calloc()` for an array of 5 integers. The memory is then resized using `realloc()` to accommodate 10 integers. Finally, the memory block is deallocated using `free()`.

Remember to always pair each call to `malloc()`, `calloc()`, or `realloc()` with a corresponding call to `free()` to avoid memory leaks.

### Conclusion

The `calloc()`, `realloc()`, and `free()` functions are essential for dynamic memory management in C. They allow you to allocate, resize, and deallocate memory during program execution. Understanding and using these functions correctly is crucial for efficient memory utilization and preventing memory leaks in your C programs.

