#include <stdio.h>

/**
 * main - prints first 50 Fibonacci nums
 *
 * Return: 0
 */

int main(void)
{
	int num, sum = 1, prevsum = 0;

	/* printf("%d, ", sum);*/

	for (num = 0; num < 50; num++)
	{
		sum = sum + prevsum;

		if ( num < 48)
		{
			printf("%d, ", sum);
		}

		else
		{
			printf("%d\n", num);
		}

		prevsum = sum;
	}

	return (0);
}
