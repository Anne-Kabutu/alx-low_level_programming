#include <stdio.h>

/**
 * main - prints all possible combinations of three numbers, no repeats
 *
 * Return: Always 0
 */

int main(void)
{
	int num1, num2, num3;

	num1 = '0';
	num2 = num1 + 1;
	num3 = num2 + 1;

	while (num1 < '8')
	{
		while (num2 < '9')
		{
			while (num3 <= '9')
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);

				if (num1 != '7' || num2 != '8' || num3 != '9')
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
			num3 = num2 + 1;
		}
		num1++;
		num2 = num1 + 1;
	}

	putchar('\n');

	return (0);
}
