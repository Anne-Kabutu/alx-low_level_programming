#include "main.h"
#include "stdlib.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int index = 0, i = 0, ind, size;
	char *catstr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 == "";

	while (s1[i])
	{
		i++;
	}
	i--;

	while (s2[index])
	{
		index++;
	}
	index--;

	size = i + index;
	catstr = (char *)malloc((sizeof(char) * size));

	if (catstr == NULL)
		return (NULL);

	for (ind = 0; ind < i; ind++)
	{
		catstr[ind] = s1[ind];
	}

	i = 0;

	for (; ind < size; ind++)
	{
		catstr[ind] = s2[i];
		i++;
	}

	catstr[size] = '\0';

	return (catstr);
}
