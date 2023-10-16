#include "main.h"

/**
 * _strlen - retuns length of string
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen(char *s)
{

	int index =  0;

	while (!(*(s + index) == '\0'))
	{
		index++;
	}

	return (index);
}
