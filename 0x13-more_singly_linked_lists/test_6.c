#include "lists.h"

/**
 * pop_listint - Deletes the head node of linked list
 * @head: Pointer to head node
 *
 * Return: Head node's data (n)
 *       - 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (head == NULL)
		return (0);
	tmp = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = tmp;
	return (value);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	listint_t *head;
	int n;

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
	n = pop_listint(&head);
	printf("- %d\n", n);
	print_listint(head);
	n = pop_listint(&head);
	printf("- %d\n", n);
	print_listint(head);
	free_listint2(&head);
	printf("%p\n", (void *)head);
	return (0);
}
