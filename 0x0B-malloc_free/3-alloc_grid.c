#include "main.h"
/**
 * alloc_grid - allocate memory for a 2D array.
 * @width: the width.
 * @height: the height.
 *
 * Return: a pointer to a 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **grid, w = 0, h = 0;

	grid = malloc(sizeof(int *) * height);
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for (; h <= 0; h--)
				free(grid[h]);

			grid = (NULL);
		}
	}
	if (grid == NULL || width <= 0 || height <= 0)
	{
		free(grid);
		return (NULL);
	}
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
