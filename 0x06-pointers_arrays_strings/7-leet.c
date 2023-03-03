#include "main.h"

/**
 * *leet - function that encodes a string
 *
 * @str: String to be encoded
 *
 * Return: The encoded string
 */
char *leet(char *str)
{
	static const char * const leet[] = {"4", "3", "0", "7", "1"};
	char *p = str;

	while (*p != '\0')
	{
		int index = -1;

		index += (*p == 'a' || *p == 'A') ? 1 : 0;
		index += (*p == 'e' || *p == 'E') ? 2 : 0;
		index += (*p == 'o' || *p == 'O') ? 3 : 0;
		index += (*p == 't' || *p == 'T') ? 4 : 0;
		index += (*p == 'l' || *p == 'L') ? 5 : 0;

		if (index > -1 && index < 5)
		{
			*p = *leet[index];
		}
		p++;
	}
	return (str);
}
