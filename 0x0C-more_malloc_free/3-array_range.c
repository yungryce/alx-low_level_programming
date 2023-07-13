#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *p, size, i;

	if (min > max)
		return (NULL);

	size = max - min;
	p = malloc(sizeof(int) * size + 1);
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		p[i] = i;

	return (p);
}