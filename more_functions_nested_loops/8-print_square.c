#include "main.h"
/**
 * print_square - the name of the rototype
 *
 * @size: name vairbale
 * Return: 0
**/
void print_square(int size)
{
int d;
int y;
	if (size > 0)
	{
		for (d = 0; d < size; d++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');

			if (size == 0)
			{
				_putchar('\n');
			}
		}
	}
}
