#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concancates all arguments of a string
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (; av[i][len] != '\0'; len++)
			;
	}

	str = malloc(sizeof(char) * (len + ac));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		for (len = 0; av[i][len] != '\0'; len++)
		{
			str[index] = av[i][len];
			index++;
		}

		str[index] = '\n';
		index++;
	}

	return (str);
	free(str);
}
