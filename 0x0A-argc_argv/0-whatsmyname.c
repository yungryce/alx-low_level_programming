#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc == 1)
		printf("%s\n", argv[0]);

	return (0);
}
