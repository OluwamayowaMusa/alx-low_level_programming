#include "lists.h"

/**
 * print_list - Prints all the elements of the input list
 * @h: Pointer to struct list_t
 *
 * Return: the number of nodes (linked list)
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	printf("[%u] %s\n", h->len, h->str);
	i++;

	return (i);
}
