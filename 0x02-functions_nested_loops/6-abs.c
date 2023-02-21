#include "main.h"

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
