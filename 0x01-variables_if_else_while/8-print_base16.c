#include <stdio.h>

/**
 * main - Prints numbers of base 16
 *
 * Return: Always (0)
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	for (b = 'b'; b <= 'f'; b++)
		putchar(a);
	putchar('\n');
	return (0);
}
