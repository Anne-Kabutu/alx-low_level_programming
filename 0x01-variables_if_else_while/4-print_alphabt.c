#include <stdio.h>

/**
 * main - prints alphabets in lowercase except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha++;
			continue;
		}
		else
		{
			putchar(alpha);
			alpha++;
		}
	}

	putchar('\n');

	return (0);
}
