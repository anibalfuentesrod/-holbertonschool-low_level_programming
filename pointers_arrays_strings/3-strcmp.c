#include "main.h"
/**
 * _strcmp - the name of function
 *
 * @s1: so....the first string
 * @s2: so....the second string
 * Return: jajja 0
**/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
