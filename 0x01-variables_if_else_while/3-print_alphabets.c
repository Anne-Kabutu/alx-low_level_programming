#include <stdio.h>

/**
 * main - prints alphabets in lowercase then uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char upper =  65;
	char lower = 97;

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
