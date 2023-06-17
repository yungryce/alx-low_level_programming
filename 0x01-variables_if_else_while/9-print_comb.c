#include <stdio.h>

/**
 * main - single digit combinations
 * Return: 0 to main
 */
int main(void)
{
	int counter;

	for (counter = 48; counter <= 57; counter++)
	{
		putchar(counter);
		if (counter != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
