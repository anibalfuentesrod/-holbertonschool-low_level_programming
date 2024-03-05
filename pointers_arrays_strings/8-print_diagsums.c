#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the name of function
 *
 * @a: the pointer to be taken care of
 * @size: th size to be
**/
void print_diagsums(int *a, int size)
{
	int firstadd = 0;
	int secondadd = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		firstadd += *(a + i * size + i);
		secondadd += *(a + i * size + (size - 1 - i));
	}
		printf("%d, %d\n", firstadd, secondadd);
}
