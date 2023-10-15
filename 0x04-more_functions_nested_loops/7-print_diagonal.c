#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal
 * @n: number of \ to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int space, slash;

	if (n > 0)
	{
		for (slash = 0; slash < n; slash++)
		{
			for (space = 0; space < slash; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}

	if (n < 1)
	{
		_putchar('\n');
	}

}
