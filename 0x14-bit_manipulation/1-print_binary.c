#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number whose binary rep. is to be printed
 */
void print_binary(unsigned long int n)
{
	int num_bits;
	unsigned long int mask;
	int i;

	num_bits = sizeof(unsigned long int) * 8;
	mask = 1ul << (num_bits - 1);

	for (i = 0; i < num_bits; i++)
	{
		if (n & mask)
			_putchar('1');
		_putchar('0');

		mask >>= 1;
	}
}
