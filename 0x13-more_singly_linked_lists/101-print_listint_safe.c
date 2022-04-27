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
