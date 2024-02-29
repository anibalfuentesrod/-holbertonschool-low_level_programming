#include "main.h"
/**
 * _strcpy - the name of prototype
 *
 * @dest: valor of pointer
 * @src: the same one
 * Return: *dest
**/

char *_strcpy(char *dest, char *src)
{
	char *og_dest = dest;

	while ((*dest++ = *src++) != '\0')
	{}
return (og_dest);
}
