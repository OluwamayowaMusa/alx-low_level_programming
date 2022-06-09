#include "lists.h"

/**
 * print_dlistint - Print all the elements of linked list
 * @h: Pointer to douby linked list
 *
 * Return: Number of Nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
