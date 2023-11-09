#include "lists.h"
/**
 * print_dlistint - print list
 *
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return counter;
}
