#include <stdio.h>

/**
 * main - print all single digit numbers
 * Return: 0 to main
 */
int main(void)
{
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		printf("%i", counter);
	}
	putchar('\n');

	return (0);
}
