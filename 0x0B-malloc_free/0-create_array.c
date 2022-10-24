#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates a char array. initiallizes with a specific char
 * @size: the size of array
 * @c: char to initiallize
 *
 * Return: Pointer to array, NULL if size = 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	/* when size is 0, NULL is returned */
	if (size == 0)
		return (NULL);

	/* allocating memory to array pointer*/
	a = malloc(size * sizeof(char));

	/* when there isn't enough space in memory, return NULL*/
	if (a == NULL)
	{
		return (NULL);
	}

	/* intializing array values*/
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	/* returns array pointer*/
	return (a);
}
