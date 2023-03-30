#include <stdlib.h>
#include <string.h>

/**
 * count_words - Count the number of words in a string
 *
 * @str: String to count words in
 *
 * Return: Number of words in string
 */
int count_words(char *str)
{
	int i, count;

	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	return (count);
}

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
	wordcount = count_words(str);
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
