#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees 2-D grid created in number 3
 * @grid: array to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
