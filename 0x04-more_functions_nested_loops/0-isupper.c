#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: the int to check
 *
 * Return: 1 on sucess and 0 when false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
