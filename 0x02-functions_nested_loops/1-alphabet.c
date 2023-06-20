#include "main.h"

/**
 * print_alphabet - puts char into main.c program
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
