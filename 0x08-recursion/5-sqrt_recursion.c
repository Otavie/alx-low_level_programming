#include "main.h"

/**
 * _sqrt_helper - recursive helper to find the sqrt of a number
 *
 * @num: The number to find the square root of
 * @low: The lower bound of the search range
 * @high: The upper bound of the search range
 *
 * Return: The natural square root of num
 */
int _sqrt_helper(int num, int low, int high)
{
	int mid, square;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;
	square = mid * mid;

	if (square == num)
	{
		return (mid);
	}
	else if (square < num)
	{
		return (_sqrt_helper(num, mid + 1, high));
	}
	else
	{
		return (_sqrt_helper(num, low, mid - 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: The number the natural square is to be returned
 *
 * Return: The natural square root of n
 */
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
