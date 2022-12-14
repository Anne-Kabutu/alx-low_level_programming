#include "main.h"

/**
 * _strncat - concatenates two stirings upto n bytes
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = j = 0;

	while (*(dest + i))
		i++;

	while (*(src + j) && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
