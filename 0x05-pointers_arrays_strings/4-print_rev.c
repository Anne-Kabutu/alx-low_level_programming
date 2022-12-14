#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
