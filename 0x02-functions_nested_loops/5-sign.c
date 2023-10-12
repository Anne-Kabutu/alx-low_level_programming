#include "main.h"

/**
 * print_sign - prints sign of a num, prints 0 if num = 0
 * @n: int to check
 *
 * Return: 1, if n is +, 0 if n is 0, -1 if n is -
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
