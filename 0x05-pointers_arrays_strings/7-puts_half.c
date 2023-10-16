#include "main.h"

/**
 * puts_half - prints half of a string, if odd, print half of length -1
 * @str: pointer to string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int index = 0, half = 0;

	while (*(str + index) != '\0')
	{
		index++;
	}

	index--;

	if ((index % 2) == 0)
	{
		half = (index / 2) + 1;

		while (half <= index)
		{
			_putchar(*(str + half));
			half++;
		}

		_putchar('\n');
	}

	else
	{
		half = ((index - 1) / 2) + 1;

		while (half <= index)
		{
			_putchar(*(str + half));
			half++;
		}

		_putchar('\n');
	}
}
