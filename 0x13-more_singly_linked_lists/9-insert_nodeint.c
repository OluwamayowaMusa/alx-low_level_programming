#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at index
 * @head: Pointer containing the address of head node
 * @idx: index of list of where the new node should be inserted
 * @n: data in new node
 *
 * Return: address of new node
 *       - NULL if failed
 */
listint_t  *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp1;
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (*head == NULL && idx > 0)
		return (NULL);
	temp = *head;
	temp1 = *head;
	while (temp1 != NULL && i < idx - 1)
	{
		temp1 = temp1->next;
		i++;
	}
	i = 0;
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (temp1 == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = temp;
	temp1->next = newNode;
	return (newNode);
}
