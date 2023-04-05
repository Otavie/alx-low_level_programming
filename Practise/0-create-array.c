#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *array = (char *) malloc(size * sizeof(char));

	if ((size == 0) || (array == "NULL"))
		printf("This is NULL\n");
}

int main(void)
{
	create_array(0, 'H');

	return (0);
}
