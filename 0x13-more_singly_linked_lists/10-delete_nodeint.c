#include "lists.h"
/**
 *insert_nodeint_at_index - get the sum of all the data in linked list
 *@head: head of linked list
 *@idx: index that we should add node at
 *@n: data for the node
 *Return: return pointer to the new node
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0, i;
	listint_t *fast = *head, *slow = NULL;

	while (fast != NULL)
	{
		count++;
		fast = fast->next;
	}
	if (index > count - 1 || head == NULL || (*head) == NULL)
		return (-1);

	fast = *head;

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(fast);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			slow = fast;
			fast = fast->next;
		}
		slow->next = fast->next;
		free(fast);
	}
	return (1);
}
