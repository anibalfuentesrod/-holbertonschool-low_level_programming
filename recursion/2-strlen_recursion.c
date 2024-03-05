#include "main.h"
/**
 * _strlen_recursion - the name of function
 *
 * @s: the string
 * Return: s[i]
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
