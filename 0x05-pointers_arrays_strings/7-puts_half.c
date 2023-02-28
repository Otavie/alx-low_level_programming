#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 *
 * @str: String to be printed
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n, i;

	if (len % 2 == 0)
	{
		n = len / 2;
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
