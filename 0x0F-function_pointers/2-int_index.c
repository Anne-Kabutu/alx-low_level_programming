#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size:number of elements in the array
 * cmp: pointer to funtion to search for int
 *
 * Returns: index if greater than 0, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, num;

	if (size <= 0 && array == NULL && cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		num = cmp(array[i]);
	}

	if (!(num))
		return (-1);

	else
		return (num);

}
