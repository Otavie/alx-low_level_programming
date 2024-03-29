#include "main.h"

/**
 * is_prime_helper - a recursive helper function that checks for a prime number
 *
 * @n: The number to be checked
 * @i: The current divisor to check
 * @j: The maximum possible divisor
 *
 * Return: 1 if prime or otherwise 0
 */
int is_prime_helper(int n, int i, int j)
{
	if (i > j)
		return (1);
	else if (n % j == 0)
		return (0);
	else
		return (is_prime_helper(n, i, j - 1));
}


/**
 * is_prime_number - Det. if an integer is prime by calling a recursive func
 *
 * @n: The integer to be checked
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_helper(n, 2, n - 1));
}
