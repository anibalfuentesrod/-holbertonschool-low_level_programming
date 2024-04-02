#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - the name of function
 * @h: the pointer
 * Return: the number of elements in the list
**/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
