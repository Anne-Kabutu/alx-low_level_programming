#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int index = 0, i = 0;
	char *rev = s;

	while (*(rev + index) != '\0')
	{
		index++;
	}

	index--;

	while (index >= 0)
	{
		*(s + i) = *(rev + index);
		index--;
		i++;
	}
}
