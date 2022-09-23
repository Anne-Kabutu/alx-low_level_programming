#include "main.h"

/**
 * string_toupper - changes a string to uppercase letters
 * @s: pointer to string
 *
 * Return: pointer s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
