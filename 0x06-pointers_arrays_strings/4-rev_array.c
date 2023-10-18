#include "main.h"

/**
 * reverse_array - reverses the contents of an int array
 * @a: pointer to int array
 * @n: number of elements of the array
 *
 * Retrun: void
 */

void reverse_array(int *a, int n)
{
	int index, i = 0, rev[1000000];

	for (index = 0; index < n; index++)
	{
		rev[index] = a[index];
	}

	index--;

	for (; index >= 0; index--)
	{
		a[i] = rev[index];
		i++;
	}
}

