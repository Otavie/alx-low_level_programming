#include "main.h"
#include <stddef.h>

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
