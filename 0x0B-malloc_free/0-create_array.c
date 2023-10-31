#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it to a specific char
 * @size: size of array
 * @c: the character to initialize array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
	free(arr);
}
