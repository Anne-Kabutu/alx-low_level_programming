#include "main.h"
/**
 * _abs - computes the absolute value of a num
 * @num: number to compute absolute value
 *
 * Return: the absolute value of a num
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
		return (num);
}
