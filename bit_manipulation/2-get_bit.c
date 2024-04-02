#include <stdio.h>
#include "main.h"
/**
 * get_bit - the name of function
 * @n: the var
 * @index: the other var or index whatever you prefer
 * Return: -1, 1 and 0
**/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (n & mask)
		return (1);
	else
		return (0);
}
