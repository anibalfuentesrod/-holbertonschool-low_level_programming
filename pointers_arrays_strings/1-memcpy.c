#include "main.h"
/**
 * _memcpy - the name of the variable
 *
 * @dest: the name varibale
 * @src: the other name of varibale
 * @n: the variable bytes
 *
 * Return: dest
**/
char _memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
		src++;
	}
	return (dest);
}
