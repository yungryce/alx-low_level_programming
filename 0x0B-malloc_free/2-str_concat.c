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

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	len = len1 + len2;
	n = (char *)malloc(sizeof(s1) * len + 1);

	for (i = 0; i < len1; i++)
		n[i] = s1[i];
	for (j = 0; j < len2; j++)
		n[i + j] = s2[j];
	n[i + j] = '\0';

	return (n);
}


