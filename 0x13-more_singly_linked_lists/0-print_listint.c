#include "lists.h"

/**
 * print_listint - prints all the elements of linked list
 * @h: Pointer to the head linked list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	printf("%d\n", h->n);
	n++;
	return (n);
}
