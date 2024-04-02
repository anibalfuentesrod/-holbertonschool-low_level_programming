#include "lists.h"
/**
 * get_dnodeint_at_index - the name of fucntion
 * @head: the head
 * @index: the index duhhh
 * Return: NULL
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}

	return (head);
}
