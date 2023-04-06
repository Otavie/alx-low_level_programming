#include <stdio.h>
#include "header.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int answer;
	int num1;
	int num2;

	printf("Enter the first integer: ");
	scanf("%d", &num1);
	printf("Enter the second integer: ");
	scanf("%d", &num2);

	answer = multiply(num1, num2);
	printf("The product of %d and %d is %d\n", num1, num2, answer);

	return (0);
}

/**
 * multiply - Function to multiply two numbers
 *
 * @a: First integer to be multiplied
 * @b: Second integer to be multiplied
 *
 * Return: The product of a and b
 */
int multiply(int a, int b)
{
	return (a * b);
}
