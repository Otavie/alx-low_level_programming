#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 *
 * @b: A string of 0 or 1 chars.
 *
 * Return: The converted number, or 0 if b is NULL or it conts 1 or more chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;

	num = 0;
	i = 0;
	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = num << 1;
			if (b[i] == '1')
				num += 1;
		}
		else
			return (0);
		i++;
	}

	return (num);
}
