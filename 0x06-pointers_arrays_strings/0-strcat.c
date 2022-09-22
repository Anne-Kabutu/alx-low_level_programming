#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	indexSrc = 0;
	indexDest = 0;

	*(dest + indexDest) = '\0';

	for (indexSrc = 0; indexSrc <= (*(src + indexSrc)); indexSrc++)
	{
		(*(dest + indexDest)) = (*(src + indexSrc));

		indexDest++;
	}
}
