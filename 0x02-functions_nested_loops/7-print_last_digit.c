#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @digit: variable The integer to be computed.
 * Return: value of last didgit
 */

int print_last_digit(int digit)
{
	int remain;

	if (digit < 0)
		digit = -(digit);

	remain = digit % 10;

	_putchar(remain + '0');

	return (remain);
}
