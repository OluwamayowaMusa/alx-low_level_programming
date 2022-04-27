#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Head node of linked list
 *
 * Return: address of node where loop starts
 *       - NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head, *temp1 = head;

	if (head == NULL)
		return (NULL);
	if (head->next == NULL)
		return (NULL);
	while (temp && temp1->next->next)
	{
		temp = temp->next;
		temp1 = temp1->next->next;
		if (temp == temp1)
			return (temp);
	}
	return (NULL);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	node = find_listint_loop(head2);
	if (node != NULL)
	{
		printf("Loop starts at 1 [%p} %d\n", (void *)node, node->n);
	}
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 5);
	add_nodeint(&head, 6);
	node->next = add_nodeint(&head, 9);
	add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	node = find_listint_loop(head);
	if (node != NULL)
	{
		printf("Loop starts at [%p] %d\n", (void *)node, node->n);
	}
	return (0);
}
