#include "main.h"

/**
 * _isupper - a function that checks for a digit (0 through 9)
 * @c: character to be checked
 * Return: 1 if the character is digit, 0 otherwise
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
