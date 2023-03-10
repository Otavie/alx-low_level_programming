#include <stdio.h>
#include <stdlib.h>

/**
 * parse_arguments - parses the command line arguments
 * @argc: The number of command line arguments (not used)
 * @argv: An array of command line argument strings
 * Return: The integer value of the first command line argument
 */

int parse_arguments(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		exit(0);
	}

	return (cents);
}

/**
 * calculate_coins - calculates the minimum number of coins
 * @cents: The amount of change to make
 *
 * Return: The minimum number of coins needed
 */
int calculate_coins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents--;
			coins++;
		}
	}

	return (cents);
}

/**
 * print_result - prints the minimum number of coins
 * @coins: The number of coins needed
 */
void print_result(int coins)
{
	printf("%d\n", coins);
}

/**
 * main - entry point
 * @argc: The number of command line arguments (not used)
 * @argv: An array of command line argument strings
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int cents = parse_arguments(argc, argv);
	int coins = calculate_coins(cents);

	print_result(coins);

	return (0);
}
