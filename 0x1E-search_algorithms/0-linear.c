#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the LSA
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: The first index of the value in the array, otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
