#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *
 * @n: The number whose abs value is to be printed
 *
 * Return: Always 0 (Success)
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
