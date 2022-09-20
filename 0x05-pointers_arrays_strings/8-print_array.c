#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elemst of an array
 * @a: - number of elements in array
 * @n: - number of elemnts to be printed
 *
 * Return: void
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf('\n');
}
