#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural number from n to 98.
 * @n: The starting point of the printing.
 * Return: Always 0 (Success).
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i < 98)
			{
				printf(", ");
			}
		}
	}
	else
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i > 98)
			{
				printf(", ");
			}
		}

	printf("\n");
}
