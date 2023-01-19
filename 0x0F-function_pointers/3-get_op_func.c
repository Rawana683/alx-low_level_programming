#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - choose the operator
 * @s : func to use
 * description : "selest the operator"
 * return: result
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
	while (i != 5)
	{
		if (ops[0][i] = s)
		{
			get_op_func(ops[i]);
		}
		i++;
	}
	return (NULL);
}
