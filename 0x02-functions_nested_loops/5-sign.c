#include "main.h"

/**
 *print_sign - printss a sign of a number
 *
 * Returns: 1 if true
 * if false returns 0
 * if it's an erro returns -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}



