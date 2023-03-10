#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the mul of two numbers
 *
 * @argc: The number of command line arguments (not used)
 * @argv: An array of command line argument strings
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int result = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}

	printf("%d\n", result);

	return (0);
}
