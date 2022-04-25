#include "lists.h"

/**
 * list_free - Free linked list in loop
 * @ptr: pointer to the head node;
 * @nodeNum: number of node
 */
void list_free(listint_t *ptr, int nodeNum)
{
	listint_t *d;
	int j = 0;

	d = ptr;
	while (j != nodeNum - 1 && d->next != NULL)
	{
		d = d->next;
		j++;
	}
	free(d);
}

/**
 * free_listint2 - Free linked list and set head to null
 * @head: Pointer containing address of head node
 */
void free_listint2(listint_t **head)
{
	listint_t *h;
	int i = 0;

	if (head == NULL)
	{
		return;
	}
	if (*head == NULL)
	{
		head = NULL;
		return;
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		return;
	}
	h = *head;
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	free(h);
	while (i > 1)
	{
		list_free(*head, i);
		i--;
	}
	free(*head);
	*head = NULL;
}
