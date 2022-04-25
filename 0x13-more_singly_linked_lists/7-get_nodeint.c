#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of linked list
 * @head: Pointer to head node
 * @index: Index of node
 *
 * Return: The nth node of a linked list
 *       - NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	if (index == 0)
	{
		return (temp);
	}
	while (temp != NULL && i <= index - 1)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
