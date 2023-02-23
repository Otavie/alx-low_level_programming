#include "main.h"

/**
 * more_numbers - a function that prints 0 to 9 14 times
 */
void more_numbers(void)
{
	int m;
	int n = 1;

	while (n <= 10)
	{
		for (m = 0; m <= 14; m++)
		{
			_putchar(m + '0');
		}
		n++;
	}

	_putchar('\n');
}
