#include "main.h"

/**
 * main - prints small letter alphabeths
 * a-z
 * Return: 0 as exit status
 */

void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
