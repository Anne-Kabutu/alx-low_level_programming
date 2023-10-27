#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two ints
 * @argc: argument count
 * @argv: pointer to argument string
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num, dig;

	if (argc == 3)
	{
		num = atoi(argv[1]);
		dig = atoi(argv[2]);
		printf("%d\n", num * dig);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
