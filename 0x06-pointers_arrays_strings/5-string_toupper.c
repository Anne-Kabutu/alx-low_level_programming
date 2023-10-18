#include "main.h"

/**
 * string_toupper - changes lowercase to upper
 * @a: string to change
 *
 * Return: string in caps
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}

		else
		{
			continue;
		}
	}

	return (a);
}
