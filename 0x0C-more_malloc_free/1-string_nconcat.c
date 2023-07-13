#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len, a, b;
	char *p;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	len = i + n + 1;
	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		p[a] = s1[a];

	if (s2 == NULL)
		p[i] = '\0';
	else
		for (b = 0; b < n && s2[b] != '\0'; b++)
			p[a + b] = s2[b];
	p[len - 1] = '\0';

	return (p);
}
