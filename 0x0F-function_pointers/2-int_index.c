#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used 
 *
 * Return: 
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
				return (1);
		}
	}

	return (-1);
}
