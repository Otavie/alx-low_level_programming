/*
 * File: 0-print_name.c
 * Auth: Otavie Loveday
 */

#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 *
 * @name: Pointer to the name to be printed
 * @f: Pointer to the function to be used to print the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
