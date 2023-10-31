#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated by alloc_grid
 * @grid: the array mem to free
 * @height: size of array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
	}

	free(grid);
}
