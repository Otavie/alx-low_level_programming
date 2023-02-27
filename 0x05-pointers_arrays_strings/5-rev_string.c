#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - function that prints a string in reverse
 *
 * @str: String to be printed
 */
void rev_string(char *str)
{
	int i, j;

	int len = strlen(str);

	for (i = 0, j = len - 1; i <  j; i++, j--)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	};
}
