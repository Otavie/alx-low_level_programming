#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - function that concatenates two strings
 *
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 *
 * Return: Pointer to the newly allocated space that contains s1
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);

	concat_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (concat_str == NULL)
		return (NULL);

	strcpy(concat_str, s1);
	strcat(concat_str, s2);

	return (concat_str);
}
