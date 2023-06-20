#include "main.h"

/**
 * print_alphabet_x10 - puts char a-z ten times
 * Return: Has no return value
 */

void print_alphabet_x10(void)
{
	int count;
	char alpha;

	for (count = 0; count <= 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
