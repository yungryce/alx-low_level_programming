#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: input string array
 * @accept: set of characters to search 
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;
	unsigned int count = 0;

	for (i = 0; s[i]; s++)
	{
		flag = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (count);
		}
	}

	return (0);

}
