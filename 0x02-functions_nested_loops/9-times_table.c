#include "main.h"
#include <stdio.h>

/**
 * times_table - a function that prints the 9 times table.
 */
void times_table(void)
{
	int x, y, result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = x * y;

			if (y == 0)
			{
				printf("%d", result);
			}
			else
			{
				printf(", %2d", result);
			}
		}
		printf("\n");
	}
}
