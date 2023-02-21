#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in 10 lines
 */

void print_alphabet_x10(void)
{
	char l;
	int n = 0;

	while (n < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		
		_putchar('\n');
		n++;
	}
}
