#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: 0 to main
 */
int main(void)
{
	int first, second, third;

	for (first = 48; first <= 57; first++)
	{
		for (second = 48; second <= 57; second++)
		{
			for (third = 48; third <= 57; third++)
			{
				if (first == second || second == third
					 || first == third)
					continue;
				if (first > second || second > third)
					continue;
				putchar(first);
				putchar(second);
				putchar(third);
				if (first == 55 && second == 56 && third == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
