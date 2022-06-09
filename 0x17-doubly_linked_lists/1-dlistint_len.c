#include "lists.h"

/**
 * dlistint_len - Number of elements in a linked list
 * @h: Pointer to linked list
 *
 * Return: Number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
