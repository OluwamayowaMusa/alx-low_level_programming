#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a linked list
 * @head: Pointer to linked list
 * @n: Data
 *
 * Return: Address of the new element
 *         NULL - if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}
	(*head)->prev = newNode;
	newNode->next = (*head);
	newNode->prev = NULL;
	*head = newNode;
	return (newNode);
}
