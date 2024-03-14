#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of chars
 *
 * @size: size of the array
 * @c: where the characters are being store
 *
 * Return: NULL if size is = 0
**/
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
return (array);
}
