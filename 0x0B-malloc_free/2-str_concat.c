#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to conctenates string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = (i + j + 1);
	p = malloc(sizeof(char) * k);

	if (p == NULL)
		return (NULL)
	for (l = 0; l < i; l++)
		s[l] = s1[i];
	for (l = 0; l < j; j++)
		s[l + i] = s2[l];
	s[i + j] = '\0';
	return (s);
}
