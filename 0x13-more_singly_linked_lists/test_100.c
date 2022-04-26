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

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	reverse_listint(&head);
	print_listint(head);
	free_listint2(&head);

	return (0);
}
