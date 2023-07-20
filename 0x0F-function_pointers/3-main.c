#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	calc = get_op_func(argv[2]);

	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calc(a, b));

	return (0);
}

