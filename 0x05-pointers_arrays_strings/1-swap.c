#include "main.h"

/**
 * swap_int - swaps between two integers
 * @a: an integer to be swaped
 * @b: an integer to be swaped
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
