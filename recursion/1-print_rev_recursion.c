#include "main.h"
/**
 * _print_rev_recursion - funtion name
 *
 * @s: the string to be copied
 *
**/
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
