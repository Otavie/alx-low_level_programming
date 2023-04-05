#include "main.h"

/**
 * *_strcmp - function that compares two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Integer that indicates the resukt of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}
