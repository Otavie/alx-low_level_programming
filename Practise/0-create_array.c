#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *array = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if ((size == 0) || (array == NULL))
	{
		printf("This is NULL\n");
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
