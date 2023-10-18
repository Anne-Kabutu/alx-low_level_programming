#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination of copied string
 * @src: string to copy
 * @n: size of string
 *
 * Return: pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, index = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[index] = src[i];
			index++;
		}
		dest[index] = '\0';
	}

	return (dest);
}
