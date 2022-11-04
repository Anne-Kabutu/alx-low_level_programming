#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects function to perform operation
 * @s: operator passed
 *
 * Return: pointer to function that corresponds with operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	/* verify the struct array (ops) input */
	while (ops[i].op != NULL)
	{
		/* verify operator */
		if (*s == *ops[i].op)
			return (ops[i].f);

		i++;
	}
	return (NULL);
}
