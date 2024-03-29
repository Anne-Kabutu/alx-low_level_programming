#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: adress to copy string
 * @src: pointer to string
 * @n: number of bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
