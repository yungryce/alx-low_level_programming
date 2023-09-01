#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to int value
 * @index: position to set to zero
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;
	unsigned long int i;

	temp = sizeof(unsigned long int *) * 8 - 1;
	if (index > temp)
		return (-1);

	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
