#include "variadic_functions.h"

/**
 * print_char - print a char
 * @args: arguments variable
 *
 * Return: nothing
*/

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print an integer
 * @args: arguments variable
 *
 * Return: nothing
*/

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print a float
 * @args: arguments variable
 *
 * Return: nothing
*/

void print_float(va_list args)
{
	printf("%f",  va_arg(args, double));
}

/**
 * print_string - print a string
 * @args: arguments variable
 *
 * Return: nothing
*/

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - a function that prints anything
 * @format: known last arg count for iteration
 * @...: iterator args
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *separator = "";

	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	size_t count = sizeof(funcs) / sizeof(funcs[0]);

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;

		while (j < count && (format[i] != *(funcs[j].sym)))
			j++;
		if (j < count)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
