#include "lists.h"
/**
 * add_dnodeint - add node at the start of the list
 *@head: header
 *@n: data
 * Return: returns the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (!(*head))
	{
		(*head) = new;
		new->next = NULL;
	}
	else
	{
		new->next = (*head);
		(*head)->prev = new;
		(*head) = new;
	}
	return (new);
}
