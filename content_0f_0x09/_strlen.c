#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: The string the length is to be returned
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
