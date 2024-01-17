#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid created by alloc_grid.
 * @grid: The 2D array to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	// Free memory for each row
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	// Free memory for the array of rows
	free(grid);
}
