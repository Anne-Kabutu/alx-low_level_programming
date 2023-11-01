#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string to words
 * @str: string to split
 *
 * Return: pointer to split words
 */

char **strtow(char *str)
{
	int i, index = 0, size, col = 0;
	char **strarr, *strcp = str;

	if (str == NULL)
		return (NULL);

	size = word_count(strcp);

	strarr = alloc_mem(strcp, size);

	if (strarr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			strarr[index][col] = str[i];
			col++;
		}

		if (str[i + 1] == ' ' || str[i + 1] == '\t')
		{
			strarr[index][col] = '\0';
			index++;
			col = 0;
		}
	}

	return (strarr);
}

/**
 * word_count - finds the number of words in the string
 * @str: string to count
 *
 * Retrun: no of words
 */

int word_count(char *str)
{
	int i, words = 0;

	if (str == NULL)
		return (1);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' &&  str[i] != '\t')
		{
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] != '\t')
			{
				words++;
			}
		}
	}

	return (words);
}

/**
 * alloc_mem - allocates memory to a 2D array
 * @str: string to determine size
 * @size: number of rows of the array
 *
 * Retrun: pointer to mem allocated
 */

char **alloc_mem(char *str, int size)
{
	char **strarr;
	int i, index = 0, len = 0;

	strarr = (char **)malloc(sizeof(char *) * (size + 1));

	if (strarr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' &&  str[i] != '\t')
		{
			len++;
		}

		if (str[i + 1] == ' ' || str[i + 1] == '\t')
		{
			len++;
			strarr[index] = malloc(sizeof(char) * len);

			if (strarr == NULL)
			{
				return (NULL);
			}
		}
		len = 0;
		index++;
	}

	return (strarr);
}
