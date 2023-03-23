#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a variadic function that sums all its paras
 * @n: The number of parameters
 *
 * Return: 0 if n is 0 or sum of paras
 */
int sum_them_all(const unsigned int n, ...)
{
	int total;
	unsigned int i;
	va_list args;

	va_start(args, n);
	total = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);

	return (total);
}
