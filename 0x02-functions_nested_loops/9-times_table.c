#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - a function that prints every minute of the day.
 * Return: Always 0 (Success).
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (y == 0)
			{
				printf("%d", x * y);
			}
			else
			{
				printf(", %d", x * y);
			}
		}
		printf("\n");
	}
}
