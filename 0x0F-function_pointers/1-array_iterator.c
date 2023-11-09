#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of the array
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size > 0 && action != NULL && array != NULL)
	{
		for (i = 0; i < size, i++)
		{
			action(array[i]);
		}
	}
}
