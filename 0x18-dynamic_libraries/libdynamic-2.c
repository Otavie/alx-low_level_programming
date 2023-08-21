#include "main.h"
#include <unistd.h>
#include <stddef.h>

/**
 * *_strcat - function that concatenates two strings
 *
 * @src: The source string
 * @dest: The destinnation string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';

	return (dest);
}

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

/**
 * *_strcmp - function that compares two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Integer that indicates the result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}

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
