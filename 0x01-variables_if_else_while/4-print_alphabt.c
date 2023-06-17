#include <stdio.h>

/**
 * main - prints all letters except q and e
 * Return: 0 to main
 */
int main(void)
{
	int x;
	
	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
			continue;
		putchar(x);
	}
	putchar('\n');

	return (0);
}
