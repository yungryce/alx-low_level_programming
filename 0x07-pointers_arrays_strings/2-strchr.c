#include "main.h"

/**
 * *_strchr - function that locates a character in a string.
 * @s: 
 * @c:
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *d[];

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	for (j = 0; s[j] != '\0'; j++)
		s[j] = s[i];
	return (s);
}
