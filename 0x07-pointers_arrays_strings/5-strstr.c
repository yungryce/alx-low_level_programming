#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[0] == haystack[i])
			{
				return (&haystack[i]);
			}
		}
		if (haystack[i] == needle[j])
			return (&haystack[i]);
	}
	return ('\0');
}
