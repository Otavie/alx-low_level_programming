#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - function that prints every other cgaracter
 *
 * @str: String to be printed
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len - 1; i++)
	{
		if (i % 2 == 0)
		{
			_puts(str[i]);
		}
	};
	printf("\n");
}
