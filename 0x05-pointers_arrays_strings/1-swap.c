#include "main.h"
/**
 * swap_int - a function that swaps two integers
 *
 * @a: First integer tp be swapped
 * @b: Second integer to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
