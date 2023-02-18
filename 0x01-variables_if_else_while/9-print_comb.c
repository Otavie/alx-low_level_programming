#include <stdio.h>
/**
* main - entry point of the program
*
* Return: Always 0 (Success)
**/
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '9')
		{
			putchar("%d, ", (int)'a');
		}
		else
		{
			putchar(a);
		}
	}

	putchar('\n');
	
	return (0);
}

