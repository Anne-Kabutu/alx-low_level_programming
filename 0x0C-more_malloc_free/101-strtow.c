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
	char **strarr;
	int index, i, row = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	/* finds the number of rows to create based on white spaces*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\t' || str[i] == ' ')
		{
			if (i > 0 && (str[i -1] != ' ') && (str[i - 1] != '\t'))
			{
				row++;
			}
		}
	}

	/* allocate mem to the row array ptr*/
	strarr = malloc(sizeof(char) * (row + 1));

	if (strarr == NULL)
	{
		free(strarr);
		return(NULL);
	}

	/* allocating space for each 1D array in the 2D array*/
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			strarr[row] = malloc((sizeof(char) * 2));

			if (strarr[row] == NULL)
				return (NULL);

			index = 0;

			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			{
				strarr[row][index] = str[i];
				i++;
				index++;
			}

			strarr[row][index] = '\n';
			index++;
			strarr[row][index] = '\0';

			row++;
		}

		else
		{
			i++;
		}
	}

	return (strarr);
}
