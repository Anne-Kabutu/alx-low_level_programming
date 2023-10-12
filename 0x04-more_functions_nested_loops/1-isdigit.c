#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: digit to be checked
 *
 * Return: 1, if true. 0 if false
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
