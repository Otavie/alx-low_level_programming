#include "main.h"

/**
 * _memcpy - a function that copies n bytes to a dest mem
 *
 * @dest: The pointer to the destination where the datat is copied
 * @src: The pointer to the source where data is copied from
 * @n: The number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr_dest = dest;
	char *ptr_src = src;

	for (i = 0; i < n; i++)
	{
		ptr_dest[i] = ptr_src[i];
	}

	return (dest);
}
