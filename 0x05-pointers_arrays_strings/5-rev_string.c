#include "main.h"

/**
 * rev_string - rverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int index = 0;

	while (*(s + index))
	{
		_putchar(*(s + index));
		index++;
	}
	index = index - 1;
	while (index >= 0)
	{
		_putchar(*(s + index);
		i--;
	}
}
