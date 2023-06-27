#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int n, i;

	for (n = 0; s[n] != '\0'; n++)
		;

	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
