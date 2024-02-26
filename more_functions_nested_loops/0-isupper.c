#include "main.h"
/**
 * _isupper - el nombre del prototype
 *
 * @c: la variable
 *
 * Return: 1 if c is up if not 0
*/

int _isupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
