#include <stdio.h>
#include "main.h"
/**
 * clear_bit - the name of function
 * @n: the var
 * @index: the index man oobvio
 * Return: 1 if worked -1 if not
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= mask;

	return (1);
}
