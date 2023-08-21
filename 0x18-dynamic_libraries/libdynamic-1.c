#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 *_isdigit - a program that checks for a digit (0 through 9)
 * @c: character to be checked
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _strlen - a function that returns the legth of a string
 *
 * @s: The string to be checked
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	return (strlen(s));
}

/**
 * _puts - Prints a string to stdout
 * @s: The string to be printed
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * _strcpy - copies the string pointed by src to buffer pointed by dest
 *
 * @src: The source string to be copied
 * @dest: Destinationatio buffer
 *
 * Return: A pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest_start);
}

/**
 * _atoi - function that converts a string to an integer
 *
 * @s: The string to be converted
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		if (num > 0 && (*s < '0' || *s > '9'))
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
