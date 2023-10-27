#include <stdio.h>

/**
 * main - prints the number of args passed
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
