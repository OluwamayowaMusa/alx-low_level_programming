#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform operation
 * @s: Operator passed
 *
 * Return: Fuction Pointer related to operator
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
	int i = 0;

	if ((*s + 1) != '\0')
		return (NULL);
	while (i < 5)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
