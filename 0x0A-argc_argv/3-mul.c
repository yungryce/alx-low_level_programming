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
	int i;

	if (argc == 3)
	{
		for (i = 1; i < argc - 1; i++)
			printf("%d\n", atoi(argv[i]) * atoi(argv[i + 1]));
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}

