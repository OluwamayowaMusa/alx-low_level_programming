#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth Node of a doubly linked list
 * @head: Pointer to linked list
 * @index: nth index
 *
 * Return: Node if it exist
 *         NULL - otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
