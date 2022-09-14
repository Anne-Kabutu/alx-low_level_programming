#include "main.h"

/**
 * _abs - prints the absolute value of number
 * @a: integer to find absolute value
 *
 * Return: returns (0) if sucessful
 */
int _abs(int a)
{

	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (-a);
	}
	return (0);
}
