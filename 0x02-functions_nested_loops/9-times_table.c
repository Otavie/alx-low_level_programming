#include "main.h"
#include <stdio.h>

/**
 * tie_table - a function that prints the 9 times table.
 * Return: Always 0 (Success).
 */
void times_table(void)
{
	int x, y, result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = x * y;

			if (result < 10)
			{
				printf(" %d ", result);
			}
			else
			{
				printf("%d,  ", result);
			}
		}
		printf("\n");
	}
}
