#include "main.h"
/**
 * puts_half - the name of the prototype
 *
 * @str: the name of variable
 *
 * Return:
**/

void puts_half(char *str)
{
int len;
int i = 0;
int half;
int st;
	while (str[i] != '\0')
		i++;
			len = i;
				half = (len - 1) / 2;

			for (st = half + 1; st <= len - 1; st++)
			{
				_putchar(str[st]);
			}
_putchar('\n');
}
