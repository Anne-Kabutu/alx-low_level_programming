#include <stdio.h>

/**
 * main - prints sum of all multiples of 5 and 3 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			sum += n;
		}
	}

	printf("%d\n", sum);

	return (0);
}
