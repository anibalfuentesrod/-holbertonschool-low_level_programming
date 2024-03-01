#include "main.h"
#include <stddef.h>
/**
 * _strncat - the name of function
 *
 * @dest: variable name
 * @src: varibale name
 * @n: the num variable
 * Return: ogdes
**/

char *_strncat(char *dest, char *src, int n)
{
char *ogdes = dest;
size_t i = 0;
	while (*dest != '\0')
	{
		dest++;
	}

	while ((size_t) i < (size_t) n && *src != '\0')
	{
		*dest++ = *src++;

	}
	return (ogdes);
}
