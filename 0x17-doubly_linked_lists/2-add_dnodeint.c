#include "lists.h"
/**
 * dlistint_len - count number of nodes
 *@h: header
 * Return: returns the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = *head;

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
		(*head) = new;
	}
	return (new);
}
