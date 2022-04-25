#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end oflinked list
 * @head: Pointer containing the address of linked list
 * @n: data of linked list
 *
 * Return: address to the new element
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	temp->next = newNode;
	return (newNode);
}
