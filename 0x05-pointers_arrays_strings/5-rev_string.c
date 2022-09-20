#include "main.h"

/**
 * rev_string - rverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int index;
	
	for (index = 0; index >= (*(s + index)); index++)
	{
		_putchar(*(s + index));
	}
	_putchar('\n');

	int j;

	for (j = 0; j <= index; j++)
	{
		_putchar(*(s + index));
	}
	_putchar('\n');
}
