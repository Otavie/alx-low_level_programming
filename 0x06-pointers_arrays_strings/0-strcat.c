#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - function that concatenates two strings
 *
 * @src: The source string
 * @dest: The destinnation string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char final[100];

	strcpy(final, src);
	strcpy(final, dest);

	printf("%s\n", final);
}
