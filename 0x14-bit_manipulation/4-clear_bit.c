#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 *
 * @n: Pointer to the number to modify
 * @index: Index of the bit to clear
 *
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1ul << index;

	*n &= ~mask;

	return (1);
}
