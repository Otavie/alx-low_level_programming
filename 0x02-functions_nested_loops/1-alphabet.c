#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabets, followed by a ne line.
*/
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}

	_putchar('\n');
}
