#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compare
 * @s2: string to compare it with
 *
 * Return: difference of s1 to s2
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		while (*s1 != '\0' && *s2 != '\0')
		{
			s1++;
			s2++;
		}
	}

	return (*s1 - *s2);
}
