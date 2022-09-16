#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int height, space, hash;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; height <= size; height++)
	{
		for (space = 1; space <= (size - height); space++)
		{
			_putchar(' ');
		}

		for (hash = 1; hash <= height; hash++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
