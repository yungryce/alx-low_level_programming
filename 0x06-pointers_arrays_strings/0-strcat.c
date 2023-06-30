#include "main.h"

/**
* _strcat - function appends the src string to the dest string,
* overwriting the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte.
* @dest: append destination string
* @src: source string
* Returns: pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
        int i, j;

        for (j = 0; dest[j] != '\0'; j++)
                ;
        for (i = 0; src[i] != '\0'; i++)
        {
                dest[j] = src[i];
                j++;
        }
        dest[j] = '\0';
        return (dest);
}
