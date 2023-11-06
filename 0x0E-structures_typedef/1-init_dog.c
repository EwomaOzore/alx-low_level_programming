#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the struct dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the dog's owner.
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
