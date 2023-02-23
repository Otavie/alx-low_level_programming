#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: Number of the times the character _ will be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('*');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
