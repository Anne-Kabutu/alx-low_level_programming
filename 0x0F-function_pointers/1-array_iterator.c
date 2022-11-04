#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a parameter function on each array element
 * @array: array to be executed
 * @size: size of array
 * @action: pointer to fucntion to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	/* verifies input */
	if (array == NULL || action == NULL)
		exit(98);
	/* executing the function with each array element */
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
