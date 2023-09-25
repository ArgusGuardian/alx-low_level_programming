#include "lists.h"
/**
 *insert_nodeint_at_index - get the sum of all the data in linked list
 *@head: head of linked list
 *@idx: index that we should add node at
 *@n: data for the node
 *Return: return pointer to the new node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode, *fast = *head, *slow = NULL;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	fast = *head;

	if (idx == 0)
	{
		newnode->next = *head;
		(*head)->next = newnode;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			slow = fast;
			fast = fast->next;
			if (fast == NULL)
				return (NULL);
		}
		slow->next = newnode;
		newnode->next = fast;
	}
	return (newnode);
}
