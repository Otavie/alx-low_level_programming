#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Applies a given function to each element of an array
 *
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @action: A pointer to the function to be applied to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
