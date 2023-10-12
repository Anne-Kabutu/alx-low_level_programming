#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal, a new line if n is 0 or less
 * @n: number of \ to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int space;

	if (!(n == 0))
	{
		for (space = 1; space < n; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
