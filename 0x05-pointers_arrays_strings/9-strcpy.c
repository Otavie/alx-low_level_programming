#include "main.h"

/**
 * _strcpy - copies the string pointed by src to buffer pointed by dest
 *
 * @src: The source string to be copied
 * @dest: Destinationatio buffer
 *
 * Return: A pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest_start);
}
