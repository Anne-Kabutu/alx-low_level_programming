#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char lower = 97;

	while (lower <= 122)
	{
		_putchar(lower);
		lower++;
	}

	_putchar('\n');
}
