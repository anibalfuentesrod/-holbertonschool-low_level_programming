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

	duplicate = (char *)malloc(sizeof(char) * (length + 1));

	while (str[length] != '\0')
	{
		length++;
	}

		for (i = 0; str[i] != '\0'; i++)
		{
			duplicate[i] = str[i];
		}

		return (duplicate);

		duplicate[i] = '\0';

}
