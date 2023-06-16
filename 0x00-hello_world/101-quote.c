#include <stdio.h>
#include <unistd.h>

/**
 * Write a C program followed by a new line, to the standard error.
 */

int main(void)
/* control fn */
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	/* return value should be 1 */
	return (1);
}
