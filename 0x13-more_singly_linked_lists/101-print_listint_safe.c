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

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)&(head->n), head->n);
		n++;
		head = head->next;
		if (n > 20)
			exit(98);
	}
	return (n);
}
