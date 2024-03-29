#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to locate
 *
 * Return: ponter to location of c or NULL
 */

char *_strchr(char *s, char c)
{
	while (!(*s == '\0'))
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (NULL);
}
