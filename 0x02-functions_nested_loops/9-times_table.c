#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 * Return: void
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{

		_putchar('\n');

		for (y = 0; y <= 9; y++)
		{

			z = x * y;

			if (z < 10)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
