#include "main.h"

/**
 * puts2 - prints every other char of a string
 * @str: pointer to string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int index = 0;

	while (*(str + index) != '\0')
	{
		_putchar(*(str + index));
		index++;
		index++;
	}

	_putchar('\n');
}
