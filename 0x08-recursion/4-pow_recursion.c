#include "main.h"

/**
 * _pow_recursion - a function that returns the val of x raised to the pow of y
 *
 * @x: The base number
 * @y: The power
 *
 * Return: The value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
