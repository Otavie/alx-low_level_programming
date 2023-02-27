#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @str: String to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
