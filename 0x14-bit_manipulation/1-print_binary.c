#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number whose binary rep. is to be printed
 */
void print_binary(unsigned long int n)
{
	int started;
	unsigned long int mask;

	mask = 1ul << (sizeof(unsigned long int) * 8 - 1);
	started = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
			_putchar('0');

		mask >>= 1;
	}
}
