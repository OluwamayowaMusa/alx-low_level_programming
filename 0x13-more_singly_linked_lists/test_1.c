#include "lists.h"

/**
 * listint_len - Number of elements in a linked list
 * @h: Pointer to the head linked list
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h->next != NULL)
	{
		n++;
		h = h->next;
	}
	n++;
	return (n);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;

	head  = &hello;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->n = 9;
	new->next = head;
	head = new;
	n = listint_len(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
}
