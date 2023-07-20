#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: known argument for iteration
 * @...: variadic iteration arguments
 * Return: result of iteration
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, total = 0;
	va_list sum_var;

	va_start(sum_var, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		total += va_arg(sum_var, unsigned int);

	va_end(sum_var);

	return (total);
}
