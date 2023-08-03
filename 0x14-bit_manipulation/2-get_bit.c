#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: int argument
 * @index: index, starting from 0 of bit to get
 * Return:  value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, temp = n;

	for (i = 0; i < index; (temp >>= 1), i++)
		;
	if ((temp & 1) == 1)
		return (1);
	else if ((temp & 1) == 0)
		return (0);
	else
		return (-1);
}
