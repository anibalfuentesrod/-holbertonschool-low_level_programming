#include "main.h"
/**
 * print_rev - the name
 *
 * @s: the name
 *
 * Return:
*/
void print_rev(char *s)
{
	int i =0, index, len;
	
	while (s[i] != '\0')
	{
		i++;
	}
	
	len = i;

	for (index = len -1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
