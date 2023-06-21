#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @digit: variable The integer to be computed.
 * Return: value of last didgit
 */

int print_last_digit(int digit)
{
	int remain = digit % 10;

	if (remain < 0)
		remain *= -1;

	_putchar(remain + '0');

	return (remain);
}
