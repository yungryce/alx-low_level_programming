#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to integer value
 * @index: position of bit to set. starts at 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;
	unsigned long int i;

	temp = sizeof(unsigned long int *) * 8 - 1;
	if (index > temp)
		return (-1);

	i = 1 << index;
	*n = *n | i;

	return (1);
}
