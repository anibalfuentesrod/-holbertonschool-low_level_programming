#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - the function name
 *
 * @str: the name of function
 *
 * Return: NULL if str = NULL and duplicate
**/
char *_strdup(char *str)
{
	int i;

	char *duplicate;

	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc(sizeof(char) * (length + 1));

		for (i = 0; str[i] != '\0'; i++)
		{
			duplicate[i] = str[i];
		}

		duplicate[i] = '\0';

		return (duplicate);

}
