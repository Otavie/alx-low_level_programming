#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc
 *
 * @nmemb: The number of elements to allocate
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p != NULL)
	{
		char *byte_p = p;

		for (i = 0; i < nmemb * size; i++)
			byte_p[i] = 0;

	}

	return (p);
}
