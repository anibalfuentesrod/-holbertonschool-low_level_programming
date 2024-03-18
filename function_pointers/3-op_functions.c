#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - return the sum of a and b
 * @a: first operand
 * @b: second operator
 * Return: sum of a and b
**/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the diferrence of a and b
 * @a: first variable
 * @b: second variable
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first variable
 * @b: second variable
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of the division of a and b
 * @a: first variable
 * @b: second variable
 * Return: result of division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of the division of a and b
 * @a: first variable
 * @b: second variable
 * Return: remainder ofdiv of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
