#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number yo an unsigned int
 *
 * @b: Pointer to a string of 0 or 1 chars
 *
 * Return: Converted number or 0 if b is NULL or contains char
 * --- that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	size_t i;
	char c;

	result = 0;
	i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		c = b[i];
		if (c != '0' && c != '1')
			return (0);
		result = (result << 1) + (c - '0');
	}
	return (result);
}
