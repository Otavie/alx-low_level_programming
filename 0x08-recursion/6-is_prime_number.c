#include "main.h"
#include <math.h>

/**
 * is_prime_number - a function that checks for a prime number
 *
 * @x: The number to be checked
 *
 * Return: 1 if prime or 0 if not
 */

int is_prime_helper(int n, int i);
int is_prime_number(int n);

int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i > sqrt(n))
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
