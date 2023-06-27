#include "main.

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int count, i, mid;

	for (count = 0; str[count] != '\0'; count++)
		;

	if (count % 2 == 0)
		mid = count / 2;
	else
		mid = (count / 2) + 1;

	for (i = mid; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
