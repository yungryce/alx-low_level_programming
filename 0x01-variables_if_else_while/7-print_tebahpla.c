#include <stdio.h>

/**
 * main - lower in reverese
 * Return: 0 to main
 */
int main(void)
{
	int counter;

	for (counter = 'z'; counter >= 'a'; counter--)
	{
		putchar(counter);
	}
	putchar('\n');

	return (0);
}
