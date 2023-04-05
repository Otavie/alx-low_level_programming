#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str: The string to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
