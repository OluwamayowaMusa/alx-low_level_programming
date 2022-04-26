#include "lists.h"

/**
 * reverse_listint - Reverse the linked list
 * @head: Pointer that contains address of head node
 *
 * Return: Pointer to the head node of linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h;
	listint_t *temp1;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	temp1 = *head;
	(*head) = (*head)->next;
	temp1->next = NULL;
	while ((*head) != NULL)
	{
		h = *head;
		*head = (*head)->next;
		h->next = temp1;
		temp1 = h;
	}
	*head = temp1;
	return (*head);
}
