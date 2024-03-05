#include "main.h"
#include <stddef.h>
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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
