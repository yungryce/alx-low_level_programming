/* Write a C program followed by a new line, to the standard error. */

#include <stdio.h>
#include <unistd.h>

/**
 * multi
 * line
 * comment
 */

int main(void) 
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	/* return value should be 1 */
	return (1);
}
