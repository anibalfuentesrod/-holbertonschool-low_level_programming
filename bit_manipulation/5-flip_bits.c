#include <stdio.h>
#include "main.h"
/**
 * flip_bits - the name of function
 * @n: the var
 * @m: the other var
 * Return: count
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
