#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - the function name
 *
 * @str: the name of function
 *
 * Return: NULL if str = NULL
**/
char *_strdup(char *str)
{
	int i;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	
	duplicate = (char *)malloc(sizeof(char) * strlen(str + 1));

		for (i = 0; str[i] != '\0'; i++)
		{
			duplicate[i] = str[i];
		}

					duplicate[i] = '\0';

					return (duplicate);
}
