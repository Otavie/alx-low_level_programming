#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog struct
 *
 * @d: Pointer to dog struct
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
