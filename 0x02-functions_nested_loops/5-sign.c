#include "main.h"

/**
 * print_sign - a program that prints the sign of a number.
 * @n: The number to check.
 * Return: 1 if the number is +, -1 if number is - and 0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
