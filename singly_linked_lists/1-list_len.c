#include <stdio.h>
#include "lists.h"
/**
 * list_len - the name of function
 * @h: the pointer to the thinging jajaj
 * Return: count
**/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
