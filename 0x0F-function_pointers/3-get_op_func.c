#include "3-calc.h"
#include <stddef.h>
#include <string.h>
/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: Operator passed as argument to the program
 *
 * Return: Pointer to the corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
