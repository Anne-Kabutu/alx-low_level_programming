#include <stdio.h>
/**
 * main - Prints the alphabet in lover then uppercase
 *
 * Return: (0)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
