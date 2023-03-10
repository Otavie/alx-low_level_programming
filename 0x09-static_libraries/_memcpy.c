#include "main.h"

/**
 * _memcpy - a function that copies n bytes to a destination memory
 *
 * @dest: The pointer to the destination where the data is copied
 * @src: The pointer to the source where the data is copied from
 * @n: The number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p_dest = dest;
	char *p_src = src;

	for (i = 0; i < n; i++)
	{
		p_dest[i] = p_src[i];
	}
	return (dest);
}
