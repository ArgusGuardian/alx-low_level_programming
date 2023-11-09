#include "lists.h"
/**
 * free_dlistint - free entire list
 *@head: header
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
