#include "main.h"
/**
 * _strncpy - the name of function
 *
 * @dest: the destinaiton
 * @src: where you whant to take the string
 * @n: the varibale
 * Return:
**/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		if (i < n)
			{
				i++;
				dest[i] = '\0';
			}
return (dest);
}
