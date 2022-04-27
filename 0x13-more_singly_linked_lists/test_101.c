#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: head node of linked list
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	const listint_t *h = NULL, *temp;

	if (head == NULL)
	{
		exit(98);
	}
	temp = head;
	head = head->next;
	while (temp)
	{
		if (head->next == temp && n > 2)
		{
			h = temp;
			printf("[%p] %d\n", (void *)h, h->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)temp, temp->n);
		n++;
		temp = temp->next;
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
