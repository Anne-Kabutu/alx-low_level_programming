#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * @a: pointer to first int to swap
 * @b: pointer to second int to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
