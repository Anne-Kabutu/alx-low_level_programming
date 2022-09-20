#include "main.h"

/**
 * puts2 - printts every character of a string
 * @str: the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int index = 0;

	while (*(str + index))
	{
		_putchar(*(str + index));
		index += 2;
	}
	_putchar('\n');
}
