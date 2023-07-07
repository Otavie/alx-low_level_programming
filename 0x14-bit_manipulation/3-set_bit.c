#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 *
 * @n: A pointer to the number to set the bit in
 * @index: The index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 for an err
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1ul << index;
	*n |= mask;

	return (1);
}
