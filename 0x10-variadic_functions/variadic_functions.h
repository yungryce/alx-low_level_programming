#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - A new struct type defining our print
 *
 * @sym: data type symbols
 * @print_func: a function pointer that prints data type
*/
typedef struct print
{
	char *sym;
	void (*print_func)(va_list args);
} func_printer;

#endif
