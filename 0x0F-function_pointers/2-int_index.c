#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int in an array
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to fucntion to compare the values
 * Return: index to first element, -1 if no match and size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* verify input */
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
i
	/* compare array values with funciton pointed by cmp */
	for (i = 0; i < size; i++)
	{
		/* verify array element */
		if (cmp(array[i]))

			return (i);
	}
	return (-1);
}
