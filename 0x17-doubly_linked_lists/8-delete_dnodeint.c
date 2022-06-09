#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of a linked list
 * @head: Pointer to pointer to linked list
 * @index: Node index to be deleted
 *
 * Return: 1 - if succeedded
 *        -1 - if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL, *temp1 = NULL, *temp2 = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	while (temp != NULL)
	{
		if (i == index)
			break;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	temp1 = temp->prev;
	temp2 = temp->next;
	free(temp);
	temp = NULL;
	if (temp1 != NULL)
		temp1->next = temp2;
	if (temp2 != NULL)
		temp2->prev = temp1;
	if (index == 0)
		*head = temp2;
	return (1);
}
