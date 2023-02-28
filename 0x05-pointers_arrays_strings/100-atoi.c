#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _atoi - function that converts a string to an integer
 *
 * @s: The string to be converted
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s)
	{
		if(*s == '-')
		{
			sign = -sign;
		}
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		if (num > 0 && (*s < '0' || *s > '9'))
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
