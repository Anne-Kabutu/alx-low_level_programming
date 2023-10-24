#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to char array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int index, i;

	for (i = 0; i < 8; i++)
	{
		for (index = 0; index < 8; index++)
		{
			_putchar(a[i][index]);
		}

		_putchar('\n');
	}
}
