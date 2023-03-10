#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make a change
 *
 * @argc: The number of command line arguments (not used)
 * @argv: An array of command line argument strings
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int cents = argv[1];
	int coins = 0;

	if (argc != 2)
	{
		printf("%s\n". "Error");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	return (0);
}
