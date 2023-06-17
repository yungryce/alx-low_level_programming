#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: 0 to main
 */
int main(void)
{
	int initial, final;

	for (initial = 48; initial <= 57; initial++)
	{
		for (final = 48; final <= 57; final++)
		{
			if (initial != final && final > initial)
			{
				putchar(initial);
				putchar(final);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
