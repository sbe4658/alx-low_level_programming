#include "main.h"
/**
 * free_grid - frees a 2D array.
 * @grid: 2D array.
 * @height: the height of the array.
 *
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
