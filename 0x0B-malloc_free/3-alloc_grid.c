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
	int i;
	int j;
	int **grid = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
