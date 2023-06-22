#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: argument
 * Return: 1 if upper or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
