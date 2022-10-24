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
	int i, j, size, l;
	char *constr;

	/* size of s1 is 0 when empty */
	if (s1 == NULL)
		i = 0;
	/* get size of s1 */
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}

	/* size of s2 is zero when empty */
	if (s2 == NULL)
		j = 0;

	/* get size of s2 */
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	/* size of both strings */
	size = ((j + i) - 1);

	/* allocating space for concatenated string */
	constr = malloc(size * sizeof(char));

	/* when space not available*/
	if (constr == NULL)
		return (NULL);

	/* copying s1 */
	for (l = 0; l < i; l++)
		constr[l] = s1[l];

	/* copying s2 after s1 */
	for (l = 0; l < j; l++)
		constr[i + l] = s2[l];

	/* return pointer to concatenated string*/
	return (constr);


}
