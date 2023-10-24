#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string to search
 *
 * Retrun: string after first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int index, i, old, new;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (index = 0; s[index] != '\0'; index++)
		{
			if (s[index] == accept[i])
			{
				new 			}
		}
	}
}
