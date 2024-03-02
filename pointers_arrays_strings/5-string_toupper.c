#include "main.h"
/**
 * string_toupper - name of function
 *
 *
 * @u: the variable name that i choose
 * Return: the varibale u
**/
char *string_toupper(char *u)
{
	int i;

	for (i = 0; u[i] != '\0'; i++)
	{
		if (u[i] > 96 && u[i] < 123)
		{
			u[i] -= 32;
		}
	}
	return (u);
}
