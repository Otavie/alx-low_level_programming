#include "main.h"

/**
 * is_prime_helper - a recursive helper function that checks for a prime number
 *
 * @n: The number to be checked
 * @i: The current divisor to check
 *
 * Return: 1 if prime or 0 otherwise 0
 */
int is_prime_helper(int n, int i)
{
	int sqrt_n;

	sqrt_n = 1;
	while (sqrt_n * sqrt_n <= n)
		sqrt_n++;

	if (i <= sqrt_n)
	{
		if (n % i == 0)
			return (0);
		else
			return (is_prime_helper(n, i + 1));
	}
	else
		return (1);
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
		return (is_prime_helper(n, 2));
}
