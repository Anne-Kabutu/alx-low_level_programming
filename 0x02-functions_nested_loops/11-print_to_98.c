#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers till 98
 * @a: integer value
 *
 * Return: void
 */
void print_to_98(int a)
{
	while (a > 98)
	{
		printf("%d, ", a);
		a--;
	}

	while (a < 98)
	{
		printf("%d, ", a);
		a++;
	}
	if (a == 98)
	{
		printf("%d", n);
	}

	printf("/n");
}

