#include <stdio.h>

/**
 * main - prints base 10 nums
 *
 * Return: always 0
 */

int main(void)
{
	/*declaration an intialization*/
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	putchar('\n');

	return (0);
}
