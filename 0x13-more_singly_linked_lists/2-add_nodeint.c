#include "lists.h"
/**
 *listint_len - return the number of nodes in linked list
 *@h: linked list
 *Return: number of nodes
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		newnode = *head;
		*head = newnode;
	}
	return (newnode);
}
