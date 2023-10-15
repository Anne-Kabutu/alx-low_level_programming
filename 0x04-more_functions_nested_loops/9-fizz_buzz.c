#include <stdio.h>

/**
 * main -prints 1-100:for mutilpes of 3,5 & 3&5, replace with Fizz,Buzz,FizBuzz
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (((num % 3) == 0) && ((num % 5) == 0))
		{
			printf("FizzBuzz");
		}

		else if ((num % 3) == 0)

		{
			printf("Fizz");
		}

		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d", num);
		}

		if (num < 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
