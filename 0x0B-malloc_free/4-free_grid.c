/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: Pointer to the 2D grid to be freed
 * @height: Height of the grid
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid)
}
