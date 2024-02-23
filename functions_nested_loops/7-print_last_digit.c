#include "main.h"
/**
 * print_last_digit - the prototype
 *
 *@number: variable
 * Return: 0
**/
int print_last_digit(int number)
{
int last = number % 10;
if (last < 0)
	last *= -1;
{
	_putchar(last + '0');
}
_putchar('\n');
return (last);
}
