#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *n;
	int i, j, len, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	len = len1 + len2;
	n = (char *)malloc(sizeof(char) * len + 1);
	if (n == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		n[i] = s1[i];
	for (j = 0; j < len2; j++)
		n[i + j] = s2[j];
	n[i + j] = '\0';

	return (n);
}


