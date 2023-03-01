#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - function that concatenates two strings
 *
 * @src: The source string
 * @dest: The destinnation string
 * @n: Number of bytes to be used from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
