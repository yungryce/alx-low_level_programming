#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: known last arg count for iteration
 * @...: iterator agrs
 * Return:
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list(args);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (separator && i != 3)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
