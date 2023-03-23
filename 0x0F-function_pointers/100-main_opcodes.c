#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of a memory region in hexadecimal format
 * @start_address: pointer to the start of the memory region
 * @size: size of the memory region in bytes
 */
void print_opcodes(char *start_address, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%02hhx ", *(start_address + i));
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((char *)&main, num_bytes);

	return (0);
}
