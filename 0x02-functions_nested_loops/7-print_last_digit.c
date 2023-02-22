#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: The number to check.
 * Return: Always 0 (Success).
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = -last;

	_putchar(last + '0');

	return (last);

}
