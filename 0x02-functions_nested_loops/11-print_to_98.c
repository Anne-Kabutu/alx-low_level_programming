#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints number from n to 98
 * @n: number to start from
 *
 * Return: void
 */

void print_to_98(int n)
{
	int test, store;

	test = 98;

	if (n <= test)
	{
		for (store = n; store <= 98; store++)
		{
			if (!(store == 98))
			{
				printf("%d, ", store);
			}

			else
				printf("%d", store);
		}
	}

	if (n > 98)
	{
		for (store = n; store >= 98; store--)
		{
			if (!(store == 98))
			{
				printf("%d, ", store);
			}

			else
			{
				printf("%d", store);
			}
		}
	}

	putchar('\n');
}
