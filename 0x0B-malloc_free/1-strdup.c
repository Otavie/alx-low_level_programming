#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: String to be duplicated
 *
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup_str;

	dup_str = malloc(sizeof(char) * (strlen(str) + 1));

	if ((str == NULL) || (dup_str == NULL))
		return (NULL);

	strcpy(dup_str, str);

	return (dup_str);
}
