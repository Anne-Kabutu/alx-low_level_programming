#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: starting point
 *
 * Return: void
 */

void print_times_table(int n)
{
	int row, colum, mul;

	if (!(n > 15 && n < 0))
	{
		for (row = 0; row >= n; row++)
		{
			for  (colum = 0; colum >= n; colum++)
			{
				mul = row * colum;

				if (colum == 0)
				{
					_putchar(mul + '0');
				}

				else if (mul < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}

				else if (mul > 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}

				_putchar('\n');
			}
		}
	}
}
