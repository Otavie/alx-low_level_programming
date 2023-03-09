#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: The number the natural square is to be returned
 *
 * Return: The natural square root of n
 */
int _sqrt_helper(int num, int low, int high)
{
	int mid, square;

	if (low > high)
	{
		return (-1);
	}

	mid = (low + high) / 2;
	square = mid * mid;

	if (square == num)
	{
		return (mid);
	}
	else if (square < num)
	{
		return _sqrt_helper(num, mid + 1, high);
	}
	else
	{
		return _sqrt_helper(num, low, mid - 1);
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n / 2));
	}
}
