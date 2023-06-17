#include <stdio.h>

/**
 *main - prints in upper and lower using putchar
 *Return: 0 value to fn main
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
