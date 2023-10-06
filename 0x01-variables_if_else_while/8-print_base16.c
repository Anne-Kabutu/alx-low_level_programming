#include <stdio.h>

/**
 * main - prints base 16 nums
 *
 * Return: Always 0
 */

int main(void)
{
	int num = '0';
	char alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
