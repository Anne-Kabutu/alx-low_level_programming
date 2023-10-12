#include "main.h"

/**
 * print_last_digit - prints the last digit of a num
 *@dig: num to find the last dig
 *
 * Return: the last dig
 */

int print_last_digit(int dig)
{
	int i;

	i = (dig % 10);

	if (i < 0)
	{
		i = (i * -1);
	}

	_putchar(i + '0');

	return (i);
}
