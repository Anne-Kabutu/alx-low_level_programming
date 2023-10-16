#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: pointer to array
 * @n: number of elements of array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		if (x != (n - 1))
		{
			printf("%d, ", (*(a + x)));
		}

		else
		{
			printf("%d\n", (*(a + x)));
		}

		x++;


	}
}
