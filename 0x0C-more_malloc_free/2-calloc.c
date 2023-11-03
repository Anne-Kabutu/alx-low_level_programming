#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc and sets it to 0
 * @nmemb: array to allocate mem
 * @size: bytes
 *
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
	free(ptr);
}
