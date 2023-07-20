#include "3-calc.h"

/**
 * op_add - function that adds 2 values
 * @a: first value
 * @b: second value
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtract 2 values
 * @a: first value
 * @b: second value
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies 2 values
 * @a: first value
 * @b: second value
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides 2 values
 * @a: first value
 * @b: second value
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that returns the remainder 2 values
 * @a: first value
 * @b: second value
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
