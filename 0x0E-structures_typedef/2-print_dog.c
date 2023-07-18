#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		if (d->name == NULL)
			printf("owner: (nil)\n");

		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);

	}
}
