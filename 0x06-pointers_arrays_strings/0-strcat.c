#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append on
 * @src: string to be appended
 *
 * Return: a ponter to dest
 */

char *_strcat(char *dest, char *src)
{
	int index;

	for (index = 0; dest[index] != '\0'; index++)
		;

	while((*src) != '\0')
	{
		*(dest + index) = *src;
		index++;
		src++;
	}

	return (dest);
}
