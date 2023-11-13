#include "main.h"

/**
 * _isalpha - checks for all leter cases
 * @c: The character to be checked.
 * Return: 1 if alpha or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
