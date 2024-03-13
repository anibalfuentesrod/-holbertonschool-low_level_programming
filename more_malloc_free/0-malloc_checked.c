#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
/**
 * malloc_checked - the name of function
 * @b:variable name
 * Return: ptr
**/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
