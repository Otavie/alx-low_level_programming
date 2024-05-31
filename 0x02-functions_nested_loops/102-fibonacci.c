#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers, starting with 1 and 2
 * The numbers are separated by a comma, followed by a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, next;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 50; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf(", %lu", next);
	}

	printf("\n");

	return (0);
}
