#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to find length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int index = 0;

	while (*(s + index))
		index++;
	return (index);
}
