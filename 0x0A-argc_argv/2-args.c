#include <stdio.h>

/**
 * main - prints it's args
 * @argc: argument count
 * @argv: pointer to arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
