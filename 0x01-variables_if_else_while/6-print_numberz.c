#include <stdio.h>

/**
 * main - prints numbers 0 - 9 using putchar
 * Return: 0 to main
 * ascii 1-9 rep 48-57
 * can also add 0 to counter to turn putchar to int
 */
int main(void)
{
	int counter;


	for (counter = 48; counter <= 57; counter++)
	{
		putchar(counter);

	}
	putchar('\n');

	return (0);
}
