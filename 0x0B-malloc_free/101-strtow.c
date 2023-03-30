#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words
 *
 * @str: String to split
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, len, wordcount;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = strlen(str);
	wordcount = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			wordcount++;
	}
	words = malloc(sizeof(char *) * (wordcount + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		for (j = 0; str[j] && str[j] != ' '; j++)
			;
		words[i] = malloc(sizeof(char) * (j + 1));
		if (words[i] == NULL)
		{
			while (i-- > 0)
				free(words[i]);
			return (NULL);
		}
		strncpy(words[i], str, j);
		words[i][j] = '\0';
		i++;
		str += j;
	}
	words[i] = NULL;
	return (words);
}
