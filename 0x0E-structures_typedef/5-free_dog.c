#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog
 *
 * @d: Pointer to the dog to free
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
