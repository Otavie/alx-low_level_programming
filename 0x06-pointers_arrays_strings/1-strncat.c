#include "main.h"
#include <string.h>

/**
 * *_strncat - function that concatenates two strings up to n bytes
 *
 * @src: The source string
 * @dest: The destinnation string
 * @n: The maximum number of bytes to copy from
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	const char *q = src;

	/* Find the end of the destination string */
	while (*p != '\0')
	{
		p++;
	}

	/* Append up to n bytes from the source string */
	while (*q != '\0' && n--)
	{
		*p++ = *q++;
	}
	*p = '\0';

	return (dest);
}
