#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int index = 0;

	while (*(s + index) != '\0')
	{
		index++;
	}

	index--;

	while (!(index < 0))
	{
		_putchar(*(s + index));
		index--;
	}

	_putchar('\n');
}
