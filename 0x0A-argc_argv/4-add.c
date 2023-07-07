#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
        int i, sum = 0;
	long int num;
	char *endptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &endptr, 0);

		if (*endptr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}
