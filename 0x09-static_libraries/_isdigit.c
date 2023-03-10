#include "main.h"

/**
 * _isdigit - a program that checks for a digit (0 through 9)
 * @c: The character to be checked
 *
 * Return: 1 if digit, 0 otherwise
 */
int is_digit(int c)
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
