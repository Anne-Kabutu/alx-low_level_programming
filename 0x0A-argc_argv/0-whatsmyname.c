#include <stdio.h>

/**
 * main  - prints its name
 * @argc: number of arguments
 * @argv: pointer
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
