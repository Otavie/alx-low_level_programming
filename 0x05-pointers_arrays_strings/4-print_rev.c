#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * print_rev - function that prints a string in reverse
 *
 * @str: String to be printed
 */
void print_rev(char *str)
{
	int i;
	int len = strlen(str);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar((str[i]++));
	}
	_putchar('\n');
}
