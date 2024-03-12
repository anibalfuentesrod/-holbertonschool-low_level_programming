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
	int i, j;
	int lenone = 0;
	int lentwo = 0;

	char *concatenated = (char *)malloc((lenone + lentwo + 1) * sizeof(char));
	{
		if (concatenated == NULL)
		{
			return (NULL);
		}
	}

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

	for (i = 0; i < lenone; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j < lentwo; j++)
	{
		concatenated[lenone + j] = s2[j];
	}

	return (concatenated);
}
