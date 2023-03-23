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
