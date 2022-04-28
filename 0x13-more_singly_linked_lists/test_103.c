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
	listint_t *temp, *temp1;

	if (head == NULL)
		return (NULL);
	temp = head->next;
	temp1 = (head->next)->next;
	while (temp1)
	{
		if (temp1 == temp)
		{
			temp = head;
			while (temp != temp1)
			{
				temp = temp->next;
				temp1 = temp1->next;
			}
			return (temp);
		}
		temp = temp->next;
		temp1 = (temp1->next)->next;
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
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);
	node = find_listint_loop(head2);
	if (node != NULL)
	{
		printf("Loop starts at [%p] %d\n", (void *)node, node->n);
	}
	free_listint_safe(&head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 5);
	add_nodeint(&head, 6);
	node->next = add_nodeint(&head, 7);
	add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint_safe(head);
	node = find_listint_loop(head);
	if (node != NULL)
	{
		printf("Loop starts at [%p] %d\n", (void *)node, node->n);
	}
	free_listint_safe(&head);
	return (0);
}
