#include "main.h"
/**
 * free_grid - free 2 array
 *@grid: pointer to grid
 *@height: height of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(*(grid + j));
	free(grid);
}
