#include <stdio.h>

/**
 * main - Prints alphabets in reverse
 *
 * Return: Always (0)
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
