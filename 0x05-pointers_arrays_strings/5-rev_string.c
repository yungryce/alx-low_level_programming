#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int end, start;
	char d;

	for (end = 0; s[end] != '\0'; end++)
		;
	end--;
	for (start = 0; start < end; start++, end--)
	{
		d = s[start];
		s[start] = s[end];
		s[end] = d;
	}
}
