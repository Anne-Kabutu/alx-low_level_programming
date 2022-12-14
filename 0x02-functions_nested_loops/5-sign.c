#include "main.h"

/**
  * print_sign - prints a sign of a number
  * @n: the number to print
  *
  * Return: 1 if greater than 0
  * 0 when it is zero
  * -1 when it's when less than 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
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



