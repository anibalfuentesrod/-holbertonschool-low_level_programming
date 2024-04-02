#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - tha name of function
 * @head: the head
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
