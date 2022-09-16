#include "main.h"

/**
 * _isdigit - checks for digits from 0 to 9
 * @c: the digit to be checked
 *
 * Return: (1) if true (0) if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

		return (1);

	return (0);
}
