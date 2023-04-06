#include <stdio.h>
#include "header.h"

/**
 * main - Entry point of the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	struct person person_one;
	struct person *p = &person_one;

	printf("Enter your first name: ");
	scanf("%s", person_one.first_name);
	printf("Enter your last name: ");
	scanf("%s", person_one.last_name);
	printf("Enter your age in years: ");
	scanf("%d", &person_one.age);
	printf("Enter your height in cm: ");
	scanf("%f", &person_one.height);

	printf("My details are as follows:\n");
	printf("First Name is: %s\n", p->first_name);
	printf("Last Name is: %s\n", person_one.last_name);
	printf("Age is: %d\n", person_one.age);
	printf("Height is: %f\n", person_one.height);

	return (0);
}
