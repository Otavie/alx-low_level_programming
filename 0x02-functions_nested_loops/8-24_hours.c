#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - a function that prints every minute of the day.
 * Return: Always 0 (Success).
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			printf("%02d:%02d\n", h, m);
		}
	}
}
