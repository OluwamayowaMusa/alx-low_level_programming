#include "lists.h"

/**
 * list_free - Free linked list in loop
 * @ptr: Pointer to linked list
 * @nodeNum: Node number
 */
void list_free(listint_t *ptr, int nodeNum)
{
	listint_t *d;
	int j = 0;

	d = ptr;
	while (j != nodeNum - 1 && d->next != NULL)
	{
		d = d->next;
		j++;
	}
	free(d);
}

/**
 * free_listint - Free linked list
 * @head: Head node of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *h;
	int i = 0;

	if (head == NULL)
		return;
	if (head->next == NULL)
		free(head);
	h = head;
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	free(h);
	while (i > 1)
	{
		list_free(head, i);
		i--;
	}
	free(head);
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
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	free_listint(head);
	head = NULL;
	return (0);
}
