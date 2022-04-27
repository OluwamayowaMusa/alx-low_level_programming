#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: head node of linked list
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0, i = 0;
	const listint_t *h = head;

	if (head == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)&(head->n), head->n);
		n++;
		head = head->next;
		if (n > i)
			exit(98);
	}
	return (n);
}

/**
 * main - test Function
 *
 * Return: 0
 */
int main(void)
{
	listint_t *head2;
	listint_t *head;
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
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint_safe(head);
	return (0);
}
