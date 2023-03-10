#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: The pointer to the block of memory
 * @b: The value to be set
 * @n: The numver of nytes to be set to the specified value
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = b;

	return (s);
}
