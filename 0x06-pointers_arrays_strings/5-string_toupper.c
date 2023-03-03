#include "main.h"

/**
 * *string_toupper - function that changes from lowercase to uppercase
 *
 * @str: The character to be changed
 *
 * Return: Upper case string
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - ('a' - 'A');
		}
		p++;
	}
	return (str);
}
