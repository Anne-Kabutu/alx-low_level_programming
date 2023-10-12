#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of time char _ should be printed to form a line
 *
 * Return: void
 */

void print_line(int n)
{
	int num;

	if (!(n <= 0))
	{
		for (num = n; num > 0; num--)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
