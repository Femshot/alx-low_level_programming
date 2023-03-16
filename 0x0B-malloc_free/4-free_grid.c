#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid function
 * @grid: Pointer to pointer of 2D array
 * @height: Height or Row size of the 2D array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
