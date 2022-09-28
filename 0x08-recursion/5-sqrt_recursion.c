#include "main.h"

/**
 * check_root - checks for the root of a number
 * @num: square
 * @y: guess square root
 *
 * Return: the square root of num
 * if less than 0 returns -1
 */
int check_root(int y, int num)
{
	if (y * y == num)
		return (y);
	if (y * y > num)
		return (-1);
	return (check_root(y + 1, num));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find square root
 *
 * Return: natural square root
 * if less than 0, return -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_root(1, n));
}
