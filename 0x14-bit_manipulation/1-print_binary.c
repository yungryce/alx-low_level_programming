#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: binary argumet
 *
 * Return: coverted number or 0 for !binary or NULL
 */


void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int temp = n;

	if (n == 0)
		printf("0");

	for (; (temp >>= 1) > 0; i++)
		;
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}

