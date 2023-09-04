#include "main.h"
/**
 * alloc_grid - allocate memory for a grid
 *@width: width of the grid
 *@height: height of the grid
 * Return: pointer to grid
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(grid + i) = (int *)malloc(sizeof(int) * width);
		if (*(grid + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(grid + j));
			free(grid);
			return (NULL);
		}
	}
	i = 0;
	while (i < height * width)
	{
		**(grid + i) = 0;
		i++;
	}

	return (grid);
}
