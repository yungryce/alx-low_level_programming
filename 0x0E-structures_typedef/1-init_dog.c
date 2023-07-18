#include "dog.h"

/**
 * init_dog - initializes a structure with tag_name dog
 * @d: pointer to declared structure
 * @name: member 1 of type pointer
 * @age: member 2 of type char
 * @owner: member 3 of type pointer
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
