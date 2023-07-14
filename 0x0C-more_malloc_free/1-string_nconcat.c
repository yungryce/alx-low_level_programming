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
	unsigned int i, j, len, a, b;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	len = i + n + 1;
	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		p[a] = s1[a];

	for (b = 0; b < n; b++)
		p[a + b] = s2[b];
	p[a + b] = '\0';

	return (p);
}
