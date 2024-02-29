#include "main.h"
#include <stdio.h>
/**
 * print_array - the name of funtion
 *
 * @a: this is the poitner
 * @n: and this is the number
 * Return: 0
**/
void print_array(int *a, int n)
{
int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
			if (i < n - 1)
			{
				printf(", ");
			}
	}
	printf("\n");
}
