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
	unsigned int i, j;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; s[i]; i++)
		;
	i++;
	p = malloc(i * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++;)
	{
		str[j] = p[j];
	}
	return (p);
}
