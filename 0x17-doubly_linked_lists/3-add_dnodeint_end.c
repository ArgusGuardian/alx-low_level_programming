#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of the list
 *@head: header
 *@n: data
 * Return: returns the number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		(*head) = new;
		new->prev = NULL;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	return (new);
}
