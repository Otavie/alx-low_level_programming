#include "main.h"
#include <stddef.h>

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
