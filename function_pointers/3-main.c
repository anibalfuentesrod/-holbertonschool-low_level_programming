#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of command line argument
 * @argv: Array containing the command line
 * Return: 0 on succes, otherwise 98 for wrong number of arguments,
 * 99 for invalid operator, and 100 for division/modulu by zero
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(90);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operator(num1, num2);
	printf("%d\n", result);

	return (0);
}
