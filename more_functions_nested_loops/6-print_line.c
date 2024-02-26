#include "main.h"
/**
 * print_line - the name ajj
 *
 * @n: the variable
 * Return: 0
**/
void print_line(int n)
{
int l;
	if (n < 0)
	{
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
