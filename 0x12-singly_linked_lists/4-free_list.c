#include "lists.h"

/**
 * list_free - Free allocated space in loop
 * @head: pointer to the first node of the linked list
 * @i: Position of node
 */
void list_free(list_t *head, int i)
{
	list_t *d;
	int j = 0;

	d = head;
	while (j != i - 1 && d->next != NULL)
	{
		j++;
		d = d->next;
	}
	free(d->str);
	free(d);
}


/**
 * free_list - Free the linked list
 * @head: Pointer to the first node of the linked list
 */
void free_list(list_t *head)
{
	list_t *h;
	int i = 0;

	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
		return;
	}
	h = head;
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	free(h->str);
	free(h);
	while (i > 1)
	{
		list_free(head, i);
		i--;
	}
	free(head->str);
	free(head);
}
