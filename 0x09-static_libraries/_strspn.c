#include "main.h"

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
