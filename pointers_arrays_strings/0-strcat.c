#include "main.h"
/**
 * _strcat - name of function
 *
 * @dest: varibale
 * @src: variable
 * Return: dest
**/

char *_strcat(char *dest, char *src)
{
	char *ogdest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	*dest = '\0';
	return (ogdest);
}
