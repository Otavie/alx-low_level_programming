#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (Success)
 */

void print_fizz_buzz(void);

int main(void)
{
	print_fizz_buzz();

	return (0);
}

/**
 * print_fizz_buzz - a program that prints fizz buzz
 */
 
void print_fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			if (n == 100)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d ", n);
			}
		}
	}
	printf("\n");
}
