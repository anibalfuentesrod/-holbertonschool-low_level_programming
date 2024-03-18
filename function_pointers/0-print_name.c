#include <stdio.h>
#include "function_pointer.h"
/**
 * print_name - the funciton name
 * @name: bob
 * @f: the pointer to function
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
