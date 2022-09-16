#include "main.h"

/**
 * print_diagonal - prints a diogonal line
 * @n: line length
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int backslash, space;

	if (n > 0)
	{
		for (backslash = 1; backslash <= n; backslach++)
		{
			for (space = 1; space < draw; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}


}
