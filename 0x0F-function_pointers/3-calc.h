#ifndef _CALC_H_
#define _CALC_H_

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* returns sum of a and b */
int op_add(int a, int b);

/* returns difference of a and b */
int op_sub(int a, int b);

/* returns product of a and b */
int op_mul(int a, int b);

/* returns division of a and b */
int op_div(int a, int b);

/* returns the remainder of a divied by b */
int op_mod(int a, int b);

/* selects the correct fucntion to perform the operation */
int (*get_op_func(char *s))(int, int);

#endif /* _CALC_H_ */
