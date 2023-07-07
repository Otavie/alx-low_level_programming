#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 *
 * @n: The number to get the bit from
 * @index: The index of the bit to get, starting from 0
 *
 * Return: The val of the bit at index index, or -1, for err
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1ul << index;
	bit_value = (n & mask) != 0 ? 1 : 0;

	return (bit_value);
}
