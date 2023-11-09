#include "lists.h"
/**
 * dlistint_len - count number of nodes
 *@h: header
 * Return: returns the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
