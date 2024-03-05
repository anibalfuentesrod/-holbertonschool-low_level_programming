#include "main.h"
/**
 * _strchr - the namo of prototype
 *
 * @s: the name of varibale
 * @c: the namo of second varibale
 *
 * Return: c in the stirng s, or NULL
**/
char *_strchr(char *s, char c)
{
	do {
	if (*s == c)
		return (s);
	} while (*s++);
	return ('\0');
}
