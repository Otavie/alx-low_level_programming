#include <unistd.h>
/**
 * main - entry point of the program
 * Return: 1 (error)
 *
 */
int main(void)
{	
	int le = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", le);
	return (1);
}
