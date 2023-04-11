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
	int printed;

	mask = 1ul << (sizeof(unsigned long int) * 8 - 1);
	printed = 0;

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (printed)
				_putchar('1');
		}
		else
		{
			_putchar('1');
			printed = 1;
		}
		mask >>= 1;
	}
	if (!printed)
		_putchar('0');
}
