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
	int i = 0, len = 0, index, args;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (args = 0; args < ac; args++)
	{
		for (index = 0; av[args][index] != '\0'; index++)
			len++;
	}
	len++;

	str = malloc(sizeof(char) * (len + ac));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (args = 0; args < ac; args++)
	{
		for (index = 0; av[args][index]; index++)
			str[i++] = av[args][index];

		str[i++] = '\n';
	}

	return (str);
}
