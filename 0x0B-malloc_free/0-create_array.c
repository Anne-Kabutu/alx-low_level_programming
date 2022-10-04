#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates a char array. initiallizes with a specific char
 * @size: the size of array
 * @c: char to initiallize
 *
 * Return: Pointer to array, NULL if size = 0 or it it fails
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = (malloc(sizeof(char) * size));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
