#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concatenated_string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	concatenated_string = malloc(sizeof(char) * (len1 + n + 1));

	if (concatenated_string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated_string[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated_string[i + j] = s2[j];

	concatenated_string[i + j] = '\0';

	return (concatenated_string);
}
