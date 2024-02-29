#include "main.h"
/**
 * _puts - the name
 *
 * @str: variable name
 *
 * Return;
**/

void _puts(char *str)
{
	int i = 0, index, len;

	while (str[i] != '\0')
	{
		i++;

	}
	len = i;

	for (index = 0; index <= len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');

}
