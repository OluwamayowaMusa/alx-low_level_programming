#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of linked list
 * @head: pointer to address of head node
 * @index: index of node to be deleted
 *
 * Return: 1 - if it succeeded
 *        -1 - if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	temp = *head;
	temp1 = *head;
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	while (temp1 != NULL && i < index - 1)
	{
		temp1 = temp1->next;
		i++;
	}
	i = 0;
	while (temp != NULL && i < index + 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp1 == NULL)
		return (-1);
	free(temp1->next);
	temp1->next = temp;
	return (1);

}
