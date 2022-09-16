#include <stdio.h>

/**
 * main - prints the largest primve factor
 *
 * Return: success (0)
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long divisor = 2;

	while (num > divisor)
	{
		if (num %  divisor == 0)
		{
			num = num / divisor;
			divisor = 2;
		}
		else
		{
			divisor++;
		}
	}
	printf("%lu\n", num);
	return (0);
}
