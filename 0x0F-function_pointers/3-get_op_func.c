#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform
 * the operation requested by the user
 * @s: operator passed as argument
 * Return: pointer to function corresponding to operator given as a parameter;
 * NULL (otherwise)
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

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
