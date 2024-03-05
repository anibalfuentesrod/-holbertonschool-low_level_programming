#include "main.h"
/**
 * _strspn - the name of the three
 *
 * @s: the string to be copied
 * @accept: ....i dont know to be honest
 *
 * Return: s and accept
**/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int c = 0;
	const char *pp;

	while (*s)
	{
		i = 0;
		pp = accept;
		while (*pp)
		{
			if (*pp == *s)
			{
				i = 1;
				break;
			}
			pp++;
		}
		if (!i)
			break;
		c++;
		s++;
	}
	return (c);
}
