#include "main.h"

/**
 * * reverse_array - function that compares two strings
 *
 * @a: First array of integers
 * @b: Second array of integers
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;
	int temp;

	while(i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
