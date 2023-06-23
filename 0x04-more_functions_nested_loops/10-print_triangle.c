#include "main.h"

/**
 * print_triangle - Prints triangle using "#"
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int col, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= size; col++)
		{
			for (space = size - col; space >= 1; space--)
			{
				_putchar(' ');
			}

			for (hash = 1; hash <= col; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
