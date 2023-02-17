#include <unistd.h>
/**
 * main - entry point of the program
 * Return: 1 (error)
 *
 */
int main(void)
{
	int len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);
	return (1);
}
