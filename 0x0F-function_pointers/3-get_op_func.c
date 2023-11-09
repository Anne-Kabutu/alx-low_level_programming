#include "3-calc.h"
#include <stdio.h>

/**
  * get_op_func - select correct function to perform operation
  * @s: operator
  * Return: pointer to function with operator
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

	int pos = 0;

	while (ops[pos].op != NULL)
	{
		if (*s == *ops[pos].op)
			return (ops[pos].f);
		pos++;
	}

	return (NULL);
}
