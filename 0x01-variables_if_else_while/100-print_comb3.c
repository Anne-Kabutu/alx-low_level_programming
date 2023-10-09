#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *
 * Return: always 0
 */

int main(void)
{
	int num_1, num_2;

	num_1 = 48;
	num_2 = num_1 + 1;

	while (num_1 <= 57)
	{
		while (num_2 <= 57)
		{
			putchar(num_1);
			putchar(num_2);

			if (num_1 < 56 || num_2 < 57)
			{
				putchar(',');
				putchar(' ');
			}
			num_2++;
		}
		num_1++;
		num_2 = num_1 + 1;

	}

	putchar('\n');

	return (0);
}
