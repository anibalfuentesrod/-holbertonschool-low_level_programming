#include "main.h"
#include <stdio.h>
/**
 * set_bit - the name of function
 * @n: the var
 * @index: the inde
 * Return: 1 if it worked or -1 if an error
**/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= mask;

	return (1);
}
