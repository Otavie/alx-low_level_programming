#include "main.h"

/**
 * _puts_recursion -  a function that prints a string recursively
 *
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	_putchar('\n');
	return;
}
