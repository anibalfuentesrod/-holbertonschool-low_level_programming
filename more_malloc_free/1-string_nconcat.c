#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * string_nconcat - the name of function
 * @s1: string one
 * @s2: string two
 * @n: the variable to iterate
 * Return: NULL
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ns, *em;
	unsigned int i, len, j;
	unsigned int size;

	len = 0;
	em = "";

	if (s1 == NULL)
		s1 = em;
	if (s2 == NULL)
		s2 = em;
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*ns);
	ns = malloc(size + 1);
	if (ns == NULL)
		return (NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		ns[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		ns[i] = s2[j];
	i++;
	j++;
	}
		ns[i] = '\0';
			return (ns);
}
