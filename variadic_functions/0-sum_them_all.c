#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum of all the parameters
 * @n: the variable
 * Return: if n == zero return 0
**/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	int total = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}

	va_end(args);

	return (total);
}
