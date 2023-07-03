#include "main.h"

/**
 * *_memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @n: the size of the memory to print
 * @src: the address to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
