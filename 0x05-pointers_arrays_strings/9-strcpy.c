#include "main.h"

/**
 * _strcpy - copies str pointed by the src to buffer pointed by dest
 * @src: source to copy
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*dest(dest + i) = '\0';
	return (dest);
}

