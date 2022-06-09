#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node at a new Node at a given position
 * @h: Pointer to pointer to linked list
 * @idx: Index to insert node
 * @n: Data of node to be inserted
 *
 * Return: Address of new node
 *         NULL - if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL, *temp = NULL, *temp1 = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0 && *h == NULL)
	{
		newNode->next = NULL, newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	if (idx == 0)
	{
		newNode->next = *h;
		(*h)->prev = newNode;
		newNode->prev = NULL, *h = newNode;
		return (newNode);
	}
	temp = *h;
	while (temp != NULL)
	{
		if (i == idx - 1)
			break;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	temp1 = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
	newNode->next = temp1;
	temp1->prev = newNode;
	return (newNode);
}
