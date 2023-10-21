#include <stdio.h>

/**
 * main - prints possible combos of 3 nums without repeating
 *
 * Return: always 0
 */

int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = (x + 1); y <= '9'; y++)
		{
			y++;

			for (z = (y + 1); z < '9'; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (x != '7' || y != '8' || z != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);

}
