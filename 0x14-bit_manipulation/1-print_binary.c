#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary rep. of an unsigned long int
 *
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int started;

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
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
