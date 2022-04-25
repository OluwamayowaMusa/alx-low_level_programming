#include "lists.h"

/**
 * print_listint - Number of elements in a linked list
 * @h: Pointer to the head linked list
 *
 * Return: Number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
