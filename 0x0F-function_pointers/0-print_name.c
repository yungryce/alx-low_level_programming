#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name to print
 * @f: pointer to function. pass name as argument
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
