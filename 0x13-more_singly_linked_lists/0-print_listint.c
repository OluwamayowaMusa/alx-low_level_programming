#include "lists.h"

/**
 * listint_len - Number of elements in a linked list
 * @h: Pointer to the head linked list
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
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
