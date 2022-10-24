#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string given as parameters
 * @str: string to copy
 *
 * Return: pointer to copied string or NULL if str = NULL
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *dupstr;

	/*if str = NULL, return NULL */
	if (str == NULL)
		return (NULL);

	/* allocating memory for duplicate string */
	dupstr = malloc(sizeof(str));

	/* when space is not available*/
	if (dupstr == NULL)
	{
		return (NULL);
	}

	/* duplicating the string*/
	for (i = 0; str[i]; i++)
	{
		dupstr[i] = str[i];
	}

	/* return pointer to duplicate string*/
	return (dupstr);
}
