#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string to search
 *
 * Return: string after first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int index, i;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[index] == accept[i])
			{
				return (s + index);
			}
		}
	}

	return ('\0');
}
