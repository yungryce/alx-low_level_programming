#include <stdio.h>

/**
 * main - print hex char
 * Return: 0 to main
 */
int main(void)
{
	int counter;

	for (counter = 48; counter <= 57; counter++)
	{
		putchar(counter);
	}
	for (counter = 97; counter <= 102; counter++)
	{
		putchar(counter);
	}
	putchar('\n');

	return (0);
}
