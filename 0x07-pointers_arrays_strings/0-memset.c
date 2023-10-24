#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to bytes to be filled
 * @b: bytes being pointed
 * @n: bytes to fill
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		s[num] = b;
	}

	return (s);
}
