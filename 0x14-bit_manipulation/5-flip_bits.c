#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from
 * --- one number to another.
 * @n: The first unsigned long int number.
 * @m: The second unsigned long int number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count++;
		diff &= (diff - 1);  /* Clears the least significant set bit */
	}

	return (count);
}

