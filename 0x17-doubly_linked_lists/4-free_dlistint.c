#include "lists.h"

/**
 * free_dlistint - Free Doubly linked list
 * @head: pointer to linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
