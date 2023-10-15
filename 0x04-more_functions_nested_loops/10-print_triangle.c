#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int hash, space, length;

	if (size > 0)
	{
		for (length = size; length > 0; length--)
		{
			for (space = (length - 1); space > 0; space--)
			{
				_putchar(' ');
			}

			for (hash = ((size - length) + 1); hash > 0; hash--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	if (size < 1)
	{
		_putchar('\n');
	}
}
