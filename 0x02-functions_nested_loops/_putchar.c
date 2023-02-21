#include "main.h"
#include <unistd.h>

char c;

int _putchar(c)
{
	return (write(1, &c, 1));
}
