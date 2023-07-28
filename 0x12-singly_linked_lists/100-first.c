#include <stdio.h>

void first_print(void) __attribute__ ((constructor));

/**
 * first_print - function that prints a string
 * before the main function is executed.
 */

void first_print(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
