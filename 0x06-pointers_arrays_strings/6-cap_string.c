#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: pointer to string to be capitalized
 *
 * Return: pointer to string
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{

			if (a[i - 1] == ' ' || a[i - 1] == '\t' || a[i - 1] == '\n'
				|| a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.'
				|| a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '"'
				|| a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{'
				|| a[i - 1] == '}')
			{
				a[i] -= 32;
			}
		}
	}
	return (a);
}
