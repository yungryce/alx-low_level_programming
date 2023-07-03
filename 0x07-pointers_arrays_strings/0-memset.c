#include "main.h"

/**
 * *_memset - prints buffer in hexa
 * @s: the address of memory to print
 * @n: bytes of the memory area pointed to
 * @b: constant byte
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
