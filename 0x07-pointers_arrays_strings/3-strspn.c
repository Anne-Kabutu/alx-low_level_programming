#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to find length
 * @accept: number of bytes to get from s
 *
 * Return: number of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, i = 0, len = 0;

	while (accept[i] != '\0')
	{
		for (index = 0; s[index] != '\0'; index++)
		{
			if (s[index] == accept[i])
			{
				len = index + 1;
				break;
			}
		}

		if (s[index] == accept[i])
		{
			break;
		}
		i++;
	}

	return (len);
}
