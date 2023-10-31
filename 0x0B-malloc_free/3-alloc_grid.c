#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a two dimentsional array
 * @width: of the array
 * @height: of the array
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int index, i, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		/*free(ptr);*/
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			/*for (; i >= 0; i--)*/
				/*free(ptr[i]);*/

			/*free(ptr);*/
			return (NULL);
		}
	}

	for (index = 0; index < height; index++)
	{
		for (i = 0; i < width; i++)
		{
			ptr[index][i] = 0;
		}
	}

	return (ptr);
}
