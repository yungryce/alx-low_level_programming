#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: int argument
 * @index: index, starting from 0 of bit to get
 * Return:  value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	temp = sizeof(unsigned long int) * 8 - 1;
	if (index > temp)
		return (-1);
	return ((n >> index) & 1);
}
