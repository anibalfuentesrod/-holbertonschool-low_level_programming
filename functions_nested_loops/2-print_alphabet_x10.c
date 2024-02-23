#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 *Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i = 0;
char j;

do {
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	i++;
	_putchar('\n');
} while (i <= 9);
}
