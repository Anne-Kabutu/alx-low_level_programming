#include "mainn.h"

/**
 * _islower - checks for lowercase letters
 *@c: integer as parameter
 *
 *Return: 1 is sucessfull
 *Return if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
