#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int index = 0;

	while (*(str + index))
	{
		_putchar(*(str + index));
		index++;
	}
	_putchar('\n');
}
