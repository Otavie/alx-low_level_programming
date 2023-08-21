#include "main.h"
#include <unistd.h>
#include <stddef.h>

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

/**
 * _strchr - locate a character in a string
 *
 * @s: The string to search
 * @c: The character to locate
 *
 * Return: A pointer to the NULL terminating string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: The string to check
 * @accept: A set of character to check against
 *
 * Return: Number of bytes in the initial seg of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				len++;
				break;
			}
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}

	return (len);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: The string to search
 * @accept: A set of bytes to search for
 *
 * Return: Pointer tohe byte in s that matches the one in accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *p_accept;

	while (*s)
	{
		for (p_accept = accept; *p_accept; p_accept++)
		{
			if (*s == *p_accept)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}

/**
 * _strstr - locate a substring
 *
 * @haystack: The string to search
 * @needle: Substring to find
 *
 * Return: Pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *start, *p_needle;

	while (*haystack)
	{
		start = haystack;
		p_needle = needle;

		while (*p_needle && *p_needle == *haystack)
		{
			haystack++;
			p_needle++;
		}

		if (*p_needle == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}

	return (NULL);
}
