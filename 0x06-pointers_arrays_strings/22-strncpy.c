#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - function that copies a strings
 *
 * @src: The source string
 * @dest: The destinnation string
 * @n: Number of bytes to be copied from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
