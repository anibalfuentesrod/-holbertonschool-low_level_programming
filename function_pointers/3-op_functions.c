#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - the add function
  * @a: var
  * @b: var
  *
  * Return: a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - same
  * @a: sme
  * @b: same
  *
  * Return: same
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - same
  * @a: same
  * @b: same
  *
  * Return: same
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - same
  * @a: same
  * @b: same
  *
  * Return: same
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - same
  * @a: same
  * @b: same
  *
  * Return: same
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
