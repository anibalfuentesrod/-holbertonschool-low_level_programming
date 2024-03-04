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
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ani = dest;
	char *src_ani = src;

	while (n-- > 0)
	{
		*dest_ani++ = *src_ani++;
	}
	return (dest);
}
