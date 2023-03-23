#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 * s: char * (if the string is NULL, orint (nil)
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list args_list;
	const char *p;
	char *s;
	char c;
	int i;

	i = 0;
	va_start(args_list, format);

	for (p = format; *p != '\0'; p++)
	{
		switch (*p)
		{
			case 'c':
				printf("%c", va_arg(args_list, int));
				break;
			case 'i':
				printf("%d", va_arg(args_list, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args_list, double));
				break;
			case 's':
				s = va_arg(args_list, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				continue;
		}
		if (*(p + 1) != '\0' && (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(args_list);
}
