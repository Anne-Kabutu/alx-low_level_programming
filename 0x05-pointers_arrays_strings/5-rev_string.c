#include "main.h"

/**
 * rev_string - rverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int index = 0;
	int length =0;
	char a;

	while (*(s + index))
		length++;

	for (index = length -1; index >= length / 2; index--)
	{
		a = (*(s + index));
		(*(s + index)) = s[length - index - 1];
		s[length - index - 1] = a;
	}
}
