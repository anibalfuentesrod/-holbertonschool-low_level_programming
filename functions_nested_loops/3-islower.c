#include "main.h"
/**
 *_islower - start the code
 *
 * @c: value to be checked
 *
 * Return: 1 while c is lowercase and else 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
