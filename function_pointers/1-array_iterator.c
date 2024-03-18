#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - the name of function
 * @array: the array
 * @size: the size
 * @action: the action
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
