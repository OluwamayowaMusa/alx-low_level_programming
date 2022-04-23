#include "lists.h"

/**
 * list_len - Number of elements in a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	i++;
	return (i);
}
