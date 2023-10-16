#include "main.h"

/**
 * _strcpy - copies string pointed to by src to the buffer pointed by dest
 * @dest: pointer to buffer
 * @src: pointer to strin
 *
 * Return: pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*(src + index) != '\0')
	{
		*(dest + index) = *(src + index);
			index++;
	}

	return (dest);
}
