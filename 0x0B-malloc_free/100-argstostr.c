#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program
 *
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';
	return (str);
}
