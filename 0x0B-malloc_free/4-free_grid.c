#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function that frees 2D grid
 * @grid: grid being freed
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
		free(grid[g]);
	free(grid);
}
