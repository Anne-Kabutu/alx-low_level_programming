#include "main.h"

/**
 * factorial - computes factorial of any number
 * @n: number to find factorial of
 *
 * Return:  factorial
 */

int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	fact = (n * factorial(n - 1));

	return (fact);
}
