#include <stdlib.h>

/**
 * free_grid - frees 2d array space
 * @grid: grid to freed
 * @height: number of rows (arrays)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
