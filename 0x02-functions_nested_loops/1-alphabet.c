#include "main.h"

/*
 * print_alphabet - prints the alphabets in lowercase, followed by a new line
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
