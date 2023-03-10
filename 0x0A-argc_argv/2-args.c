#include <stdio.h>

/**
 * main - prints all the arguments received
 *
 * @argc: The number of command line arguments (not used)
 * @argv: An array of command line argument strings
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
