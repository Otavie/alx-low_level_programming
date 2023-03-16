#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 *
 * @min: The minimum integer to include
 * @max: The maximum integer to include
 *
 * Return: Pointer to the newly created array or NUL on failure
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max ; i++, min++)
		arr[i] = min;

	return (arr);
}
