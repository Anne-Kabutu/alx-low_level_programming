#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string given as parameters
 * @str: string to copy
 *
 * Return: pointer to string copy or NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i, j;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i]; i++)
		;
	i++;
	p = malloc(sizeof(char) * i);

	if (p == NULL)
	{
		return (NULL);
	}
	i = i - 1;

	str[i] = p[i];

	return (p);
}
