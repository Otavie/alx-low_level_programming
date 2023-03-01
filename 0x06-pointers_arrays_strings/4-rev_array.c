#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcmp - function that compares two strings
 *
 * @a: An array of integers
 * @n: The number of elements in the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i > n; i++)
	{
		temp = a[i];
		a[i] = a[n - i + 1];
		a[n - i + 1] = temp;
	}
}
