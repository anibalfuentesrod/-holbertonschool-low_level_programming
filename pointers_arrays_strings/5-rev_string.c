#include "main.h"
/**
 * rev_string - the name of the prototype
 *
 * @s: the name of variable
 * 
 * Return:
**/

void rev_string(char *s)
{
	int i = 0, index;

	while (s[i] != '\0')
	{
		i++;
	}	
	for (index = 0; index < i / 2; index++)
	{
		char temp = s[index];
		s[index] = s[i -1 -index];
		s[i -1 - index] = temp;
	}

}
