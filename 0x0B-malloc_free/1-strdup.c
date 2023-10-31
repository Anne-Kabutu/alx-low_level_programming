#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string to new mem space
 * @str: string to duplicate
 *
 * Return: pointer to copied string
 */

char *_strdup(char *str)
{
	char *newstr;
	int i = 0, index;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	newstr = (char *) malloc((sizeof(char) * i) + 1);

	if (newstr == NULL)
		return (NULL);

	for (index = 0; index < i; index++)
	{
		newstr[index] = str[index];
	}

	newstr[index] = '\0';

	return (newstr);
}
