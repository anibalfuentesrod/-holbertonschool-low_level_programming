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
	int len1, len2;

	char *concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));
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

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}

	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; i < len2; j++)
	{
		concatenated[len1 + j] = s2[j];
	}

	return (concatenated);
}
