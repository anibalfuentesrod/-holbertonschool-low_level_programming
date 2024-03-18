#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - the name of function
 * @array: the array
 * @size: the size
 * @cmp: I don't know to be honest
 * Return: -1 if no element matches if size <= -1
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
