#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: known last arg count for iteration
 * @...: iterator agrs
 * Return:
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
