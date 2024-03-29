#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: fuction pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
