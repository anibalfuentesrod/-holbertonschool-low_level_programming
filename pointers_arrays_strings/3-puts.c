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

	for (index = 0; index <= len - 1; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');

}
