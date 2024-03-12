#include "main.h"
#include <stdlib.h>
/**
 * str_concat - the name of function
 *
 * @s1: string one
 * @s2: string two
 * Return: NULL
**/
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int suma = 0;
	int i = 0;
	int lenone = 0;
	int lentwo = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[lenone])
	{
		lenone++;
	}
	while (s2[lentwo])
	{
		lentwo++;
	}
	suma = lenone + lentwo + 1;

	concatenated = malloc(sizeof(char) * suma);

	for (i = 0; i < lenone; i++)
	{
		concatenated[i] = s1[i];
	}

	for (i = 0; i < lentwo; i++)
	{
		concatenated[lenone + i] = s2[i];
	}

	return (concatenated);
}
