#include "main.h"
/**
 * _strpbrk - the name of the function
 *
 * @s: the name of variable
 * @accept: the name of variable two
 *
 * Return: s and accept or NULL
**/
char *_strpbrk(char *s, char *accept)
{
const char *p;
while (*s)
{
	p = accept;
	while (*p)
	{
		if (*s == *p)

			return (s);
		p++;
	}
	s++;
}
	return ('\0');
}
