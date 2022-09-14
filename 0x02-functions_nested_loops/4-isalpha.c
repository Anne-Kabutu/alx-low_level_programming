#include "main.h"

/**
 * _isalpha - prints all alphabets
 * @c: the charactter to check
 *
 * Return: success (1)
 * if false, return (0)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
