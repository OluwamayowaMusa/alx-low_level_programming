#include "lists.h"

/**
 * pop_listint - Deletes the head node of linked list
 * @head: Pointer to head node
 *
 * Return: Head node's data (n)
 *       - 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL)
		return (0);
	*head->next = temp;
	value = (*head)->n;
	free(*head);
	*head = temp;
	return (value);
}
