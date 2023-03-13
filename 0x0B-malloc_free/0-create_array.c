#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - An array of chars, and initializes it with a specific char
 * @c: The character to initialize each element of the array to
 * @size: The size of the array
 *
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *) malloc(size * sizeof(char));

	if ((array == NULL) || (size == 0))
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
