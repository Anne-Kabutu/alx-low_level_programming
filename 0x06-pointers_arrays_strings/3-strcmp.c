#include "main.h"

/**
 * _strcmp - compares to stings
 * @s1: string for comparison
 * @s2: string to be compared
 *
 * Return: 0 if they are equal
 * a positive value if s1 is less than s2
 * a negative value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && *s1 == *s2)
		i++;

	return (*s1 - *s2);
}
