#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int rows, colums, product;

	for (rows = 0; rows <= 9; rows++)
	{
		for (colums = 0; colums <= 9; colums++)
		{
			product = (rows * colums);

			if (colums == 0)
			{
				_putchar('0' + product);
			}

			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}

			else if (product < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
