#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the op.
 * @s: the operator.
 *
 * Return: a pointer to the selected op, otherwise the program will terminate.
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
	while (i < 5)
	{
		if (*(ops[i]).op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
