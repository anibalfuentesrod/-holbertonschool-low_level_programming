#include <stdlib.h>
/**
 * _calloc - the namo of function
 * @nmemb: number of element
 * @size: the size variable
 * Return: pointer the new memory
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int ar, i;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = nmemb * size;
	a = malloc(ar);
	if (a == NULL)
		return (NULL);

	while (i < ar)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
