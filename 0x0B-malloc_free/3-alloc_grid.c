#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - function that returns a pointer to a 2D array of integers
 *
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: Pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	width = 0;
	height = 0;

	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	int **grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);


	return (grid);
}
