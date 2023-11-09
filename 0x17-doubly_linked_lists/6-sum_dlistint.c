#include "lists.h"
/**
 * sum_dlistint - sum of all data in linked list
 *@head: header
 * Return: sum of all the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
