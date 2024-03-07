#include "main.h"
#include <stdio.h>
int rootnatural(int n, int i);
/**
 * _sqrt_recursion - the name of function
 *
 * @n: the variable
 *
 * Return: the root of n
**/
int _sqrt_recursion(int n)
{
	return (rootnatural(n, 1));
}
/**
 * rootnatural - calculates the root
 *
 * @n: the number to calculate
 * @i: the other variable
 * Return: the natural square root
 *
**/
int rootnatural(int n, int i)
{
	int root = i * i;

	if (root > n)
	{
		return (-1);
	}
	if (root == n)
	{
		return (i);
	}
	return (rootnatural(n, i + 1));
}
