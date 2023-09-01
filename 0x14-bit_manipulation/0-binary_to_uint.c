#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to char array
 *
 * Return: converted num or null or if one or more chars in *b is not 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j |= 1;
		else if (b[i] == '0')
			continue;
		else
			return (0);
	}
	return (j);
}
