#include "main.h"
/**
 * print_last_digit - the prototype
 *
 *@number: variable
 * Return: 0
**/
int print_last_digit(int number)
{
	if (number < 0)
	{
		_putchar(number % 10);
	}
	else
	{
		_putchar('\n');
	}
return (0);
}
