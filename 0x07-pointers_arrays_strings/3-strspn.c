#include "main.h"

/**
 * _strspn - gets the length of a perfis substring
 * @s: pointer to the string
 * @accept: string to check against
 *
 * Return: number of bytes s in accept
 */
unsigned int _strspn(char *s, char *accept);
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
