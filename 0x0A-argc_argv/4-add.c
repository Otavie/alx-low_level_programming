#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of string containing the arguments
 *
 * Return: 0 if success, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	const char *arg;
	const char *p;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (p = arg; *p != '\0'; p++)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
