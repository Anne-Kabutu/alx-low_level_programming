#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	/* check if input valid */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* height mem allocation*/
	grid = malloc(sizeof(int *) * height);

	/* if mem is not available */
	if (grid == NULL)
		return (NULL);

	/* width mem allocation*/
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int *) * width);

		/*checking mem allocation*/
		if (grid[i] == NULL)
		{
			/* freeing used memory*/
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}

		/* initiallizing grid to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
