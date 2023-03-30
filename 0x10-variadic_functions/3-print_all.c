#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character argument
 *
 * @args: List of arguments
 *
 * @first_arg: Pointer to a flag indicating if this is the first argument
 */
void print_char(va_list args, int *first_arg)
{
	char c = (char)va_arg(args, int);

	if (!(*first_arg))
	{
		printf(", ");
	}
	printf("%c", c);
	*first_arg = 0;
}

/**
 * print_int - Prints an integer arguments
 *
 * @args: List arguments
 *
 * @first_arg: Pointer to a flag indicating if this is the first argument
 */
void print_int(va_list args, int *first_arg)
{
	int i = va_arg(args, int);

	if (!(*first_arg))
	{
		printf(", ");
	}
	printf("%d", i);
	*first_arg = 0;
}

/**
 * print_float - Prints a floating-point argument
 *
 * @args: List of arguments
 *
 * @first_arg: Pointer to a flag indicating if this is the first argument
 */
void print_float(va_list args, int *first_arg)
{
	float f = (float)va_arg(args, double);

	if (!(*first_arg))
	{
		printf(", ");
	}
	printf("%f", f);
	*first_arg = 0;
}

/**
 * print_string - Prints a string argument
 *
 * @args: List of arguments
 *
 * @first_arg: Pointer to a flag indicating if this is the first argument
 */
void print_string(va_list args, int *first_arg)
{
	char *s = va_arg(args, char *);

	if (!(*first_arg))
	{
		printf(", ");
	}
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
	*first_arg = 0;
}

/**
 * print_all - Prints a list of arguments based on a given format
 *
 * @format: A string of character representing the format of the argument
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int first_arg;
	const char *p;

	va_start(args, format);
	first_arg = 1;
	p = format;
	while (*p)
	{
		switch (*p)
		{
			case 'c':
				print_char(args, &first_arg);
				break;
			case 'i':
				print_int(args, &first_arg);
				break;
			case 'f':
				print_float(args, &first_arg);
				break;
			case 's':
				print_string(args, &first_arg);
				break;
			default:
				break;
		}
		p++;
	}
	printf("\n");
	va_end(args);
}
