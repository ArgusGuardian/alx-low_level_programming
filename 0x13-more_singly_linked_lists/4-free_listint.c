#include "lists.h"
/**
 *free_listint - free list
 *@head: head of linked list
 *
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
