#include "main.h"

/**
 * sign_print - a program that prints the sign of a number.
 * @n: The number to check.
 * Return: 1 if the number is +, -1 if number is - and 0 otherwise.
 */
int sign_print(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
