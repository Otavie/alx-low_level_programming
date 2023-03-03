#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - function that copies a strings
 *
 * @src: The source string
 * @dest: The destinnation string
 * @n: Number of bytes to be copied from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	const char *q = src;
	int i;

	/* Copy the first n characters of src to dest */
	for (i = 0; (i < n && *q != '\0'); i++)
	{
		*p = *q;
		p++;
		q++;
	}

	/* If src is shorter than n, pad dest with null characters */
	while (p - dest < n)
	{
		*p = '\0';
		p++;
	}

	return (dest);
}
