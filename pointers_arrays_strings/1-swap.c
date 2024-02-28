#include "main.h"
/**
 * swap_int - the name
 *
 * @a: variable
 * @b: the variable
 * Return:
**/

void swap_int(int *a, int *b)
{
	int s = *b;
	*b = *a;
	*a = s;
}
