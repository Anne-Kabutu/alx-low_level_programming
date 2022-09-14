#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: integer to be printed
 *
 * Return: always (0)
 */
int print_last_digit(int a)
{
	int last = a % 10;

	if (a < 10)
	{
		last *= -1;
	}
	_putchar (last + '0');
	return (last);
}
