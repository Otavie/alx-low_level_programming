#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: The separator to between the printed strings
 * @n: The number of strings passed to the function
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args_list;
	const char *str;

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args_list, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	va_end(args_list);

	printf("\n");
}
