#include <stdio.h>
#include <string.h>

/**
 * main - prints the number of arguments
 *
 * @argc: The number of command line arguments (not used)
 * @argv: An array of command line argument strings
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		i++;
	}
	printf("%d\n", argc - 1);

	return (0);
}
