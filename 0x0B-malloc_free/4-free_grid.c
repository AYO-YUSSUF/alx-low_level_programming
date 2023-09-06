#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid
 * @grid: the grid
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
		free(grid[x]);
	free(grid);
}
