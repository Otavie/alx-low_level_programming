#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name from a function pointer
 *
 * @name: the name to be printed
 * @f: function pointer that takes a string argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
	else
		return;
}
