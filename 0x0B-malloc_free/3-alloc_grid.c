#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer
 * to a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **mkray;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mkray = malloc(height * sizeof(int *));

	if (mkray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mkray[i] = malloc(width * sizeof(int));

		if (mkray[i] == NULL)
		{
			for (; x >= 0; x--)
				free(mkray[i]);
			free(mkray);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mkray[i][j] = 0;
	}
	return (mkray);
}
