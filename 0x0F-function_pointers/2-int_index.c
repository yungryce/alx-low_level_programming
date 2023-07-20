#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of type int to serach
 * @size: size of array
 * @cmp: pointer to comparing function
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);

	if (array && cmp)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}

	return (i);
}
