#include "main.h"

/**
 * _puts - prints a stirng followed by a new line
 * @str: pointer to a string
 *
 * Retrun: void
 */

void _puts(char *str)
{
	int index = 0;

	while (!(*(str + index) == '\0'))
	{
		_putchar(*(str + index));
		index++;
	}
	_putchar('\n');
}
