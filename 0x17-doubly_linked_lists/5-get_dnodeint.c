#include "lists.h"
/**
 * get_dnodeint_at_index - return node at the index
 *@head: header
 *@index: index targeted
 * Return: returns pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *current = head;

	for (counter = 0; counter < index && current != NULL; counter++)
		current = current->next;

	if (!current)
		return (NULL);
	return (current);
}
