#include "main.h"
#include <unistd.h>
#include <stddef.h>

/**
 * _putchar - writes a character to the standard output
 * @c: the character to print
 *
 * Return: On success 1, on error -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - a program that checks for lowercase character.*
 * @c: The character to check.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isalpha - a program that checks for alphabet
 * @c: The character to check.
 * Return: 1 if the character is lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: The number to check.
 * Return: Always 0 (Success).
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}

	return (0);
}

/**
 * _isupper - a program that checks for uppercase character
 * @c: character to be checked
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
