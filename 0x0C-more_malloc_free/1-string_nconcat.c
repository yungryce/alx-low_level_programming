#include "main.h"

/**
 * _strlen - calculate and return string length
 * @s: string to loop through
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
			;
	return (i);
}

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
	unsigned len, a, b;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1) + n + 1;
	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		p[a] = s1[a];

	for (b = 0; b < n && s2[b] != '\0'; b++)
		p[a + b] = s2[b];
	p[len - 1] = '\0';

	return (p);
}
