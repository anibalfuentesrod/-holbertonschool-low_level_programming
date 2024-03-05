#include "main.h"
/**
 * _puts_recursion - the name of function
 *
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
else
_putchar('\n');
}
