#include <stdio.h>
#include "dog.h"
/**
 * print_dog - A function that prints a the struct dog
 *
 * @d: The pointer to the dog struct
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
