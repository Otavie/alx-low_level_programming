#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: The pointer to the block of memory
 * @b: The value to be set
 * @n: The number of bytes to be set to the specified value
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}

	return (s);
}
