#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - function that prints elements of an array
 *
 * @n: The number of elements in the array
 * @a: The array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
