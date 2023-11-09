#include "lists.h"
/**
 * delete_dnodeint_at_index - index of the node to delete
 *@head: header
 *@index: index to delete
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *current = head;

	for (counter = 0; counter < index && current != NULL; counter++)
		current = current->next;

	if (!current)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;
	else
		head = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
