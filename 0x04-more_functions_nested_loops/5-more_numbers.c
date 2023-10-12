#include "main.h"

/**
 * more_numbers - prints nums from 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int num;

	for (num = 0; num < 15; num++)
	{
		if (num > 9)
		{
			_putchar((num / 10) + '0');
		}

		_putchar ((num % 10) + '0');
	}

	_putchar('\n');
}
