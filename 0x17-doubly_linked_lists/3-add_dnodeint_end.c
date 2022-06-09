#include "lists.h"


/**
 * add_dnodeint_end - Adds a new node at the end of linked list
 * @head: Pointer to pointer to linked list
 * @n: Data
 *
 * Return: Address of the new element
 *         NULL - if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *temp;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
