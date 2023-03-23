#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 *
 * @format: A list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, orint (nil)
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list args_list;
	int i;
	char c;
	float f;
	char *s;

	va_start(args_list, format);
	i = 0;

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args_list, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args_list, int);
				printf("%d", i);
				break;
			case 'f':
				f =  va_arg(args_list, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args_list, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
		}
		i++;
	}

	printf("\n");

	va_end(args_list);
}
