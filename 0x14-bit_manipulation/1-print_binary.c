#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: binary argumet
 *
 * Return: coverted number or 0 for !binary or NULL
 */


void print_binary(unsigned long int n)
{
	unsigned long int bit;

	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		bit =  n & 1;
		_putchar(bit + '0');
		n >>= 1;
	}
}

