#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make a change
 * @argc: The number of command line arguments (not used)
 * @argv: An array of command line argument strings
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int cents, int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 20)
		{
			coins += cents / 20;
			cents %= 20;
		}
		else if (cents >= 5)
		{
			coins += cents / 5;
			cents %= 5;
		}
		else if (cents >= 2)
		{
			coins += cents / 2;
			cents %= 2;
		}
		else
		{
			coins += cents;
			cents = 0;
		}
	}
	printf("%d\n", (coins - 1));
	return (0);
}
