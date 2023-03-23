#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: the name to be printed
 * @f: pointer to the function to be used to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
