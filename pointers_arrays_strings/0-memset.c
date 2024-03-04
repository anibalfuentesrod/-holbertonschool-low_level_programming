#include "main.h"
/**
 * _memset - the name
 *
 * @s: the name varibale
 * @b: the varibale name
 * @n: the another varible
 *
 * Return: s
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
