#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - ('a' - 'A');
	}
	return (c);
}
