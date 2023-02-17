#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return 0: indciates success
*/ 
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
       	printf("Size of an int: %lu byte(s)\n", sizeof(int));
       	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
       	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
       	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	
	return (0);
}
