#include "main.h"
/**
 * cap_string - jajjjajjaja
 *
 * @s: the name
 * Return: u
**/
char *cap_string(char *s)
{
	char *u = s;
	int i;
	char a[] = " \t\n,.!?\"(){}";
	int c = 1;

	while (*s)
	{
		if (c && *s >= 'a' && *s <= 'z')
			*s -= 32;
		c = 0;
		for (i = 0; i < 12; i++)
		{
			if (*s == a[i])
				c = 1;
		}
		s++;
	}
	return (u);
}
