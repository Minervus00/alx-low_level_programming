#include <string.h>
#define __GET__H__
#include "3-calc.h"

/**
 * get_op_func - uujjs
 * @s: ff
 *
 * Return: noo
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
		if (!(strcmp(s, ops[i].op)))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
