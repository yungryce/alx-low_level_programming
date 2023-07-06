
#include "main.h"

/**
 * is_prime_number- checks to see if number is prime
 * @n: integer given
 * Return: integer prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime_checker(n, n - 1));
}

/**
 * _prime_checker- calculates if a number is prime recursively
 * @num: number to evaluate
 * @iter: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int _prime_checker(int num, int iter)
{
	if (iter == 1)
		return (1);
	else if (num % iter == 0 && iter > 0)
		return (0);

	return (_prime_checker(num, iter - 1));
}
