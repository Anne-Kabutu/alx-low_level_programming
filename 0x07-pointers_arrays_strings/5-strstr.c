#include "main.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: string to look
 * @needle: string to find
 *
 * Return: a pointer to string
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay, *need;

	while (*haystack != '\0')
	{
		hay = haystack;
		need = needle;

		while (*haystack != '\0' && *need !=  '\0' && *haystack == *need)
		{
			haystack++;
			need++;
		}

		if (!*need)
		{
			return (hay);
		}

		haystack = hay + 1;
	}

	return (0);
}
