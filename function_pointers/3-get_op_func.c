#include <stdio.h>
#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * get_op_func - selects the corect function to perform the operator
 * @s: operator passed as argument to the program
 *
 * Return: ptr to the function that corresponds to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && !(*(s + 1)))
		{
			return (ops[i].f);
			i++;
		}
	}
printf("Error\n");
exit(99);
}
