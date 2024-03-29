#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int rows;
	int colums;
	int times;

	for (rows = 0; rows < 10; rows++)
	{
		for (colums = 0; colums < 10; colums++)
		{
			times = rows * colums;

			if (colums == 0)
			{
				_putchar(times + '0');
			}

			else if (times > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}

			else if (times <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(times + '0');
			}
		}

		_putchar('\n');
	}
}
