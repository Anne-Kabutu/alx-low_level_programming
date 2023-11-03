#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of string two to copy
 *
 * Return: NULL for failure, or ponter to new mem
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, index, size, cnt;
	char *newstr;

	if (s1 == NULL)
		s1 = "";

	if (s2 ==NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (index = 0; s2[index] != '\0'; index++)
		;

	if (n < index)
	{
		size = i + n;
	}

	if (n >= index)
	{
		size = index + i;
	}

	newstr = malloc(sizeof(char) * (size + 1));

	if (newstr == NULL)
	{
		free(newstr);
		return(NULL);
	}

	for (cnt = 0; cnt < i; cnt++)
	{
		newstr[cnt] = s1[cnt];
	}

	i = 0;

	for (; cnt < size; cnt++)
	{
		newstr[cnt] = s2[i];
		i++;
	}

	newstr[i] = '\0';

	return (newstr);
}
