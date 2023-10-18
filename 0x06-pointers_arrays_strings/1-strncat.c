#include "main.h"

/**
 * _strncat - concatenates two stings at n bytes from the src string
 * @dest: string to append to
 * @src: string to be appended
 * @n: number of bytes from src
 *
 * Return: pointer to concat string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, i;

	for (index = 0; dest[index] != '\0'; index++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[index] = src[i];
			index++;
		}
	}

	return (dest);
}
