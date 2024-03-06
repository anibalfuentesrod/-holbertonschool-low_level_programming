#include "main.h"
/**
 * factorial - the name of function
 *
 * @n: the number to be taken account for
 *
 * Return: -1 to indicate an error
**/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	else
	{
	return (n * factorial(n - 1));
	}
}
