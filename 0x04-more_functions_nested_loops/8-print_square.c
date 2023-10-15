#include "main.h"

/**
 * print_square - prints a square using the # char
 *@size: the size of square; length and width
 *
 * Return: void
 */

void print_square(int size)
{
	int length, width;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
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
