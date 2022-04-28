#include "lists.h"

/**
 * break_loop - check is number is in array;
 * @ptr: Pointer to an array
 * @num: Number to be checked
 *
 * Return: 1 - Number present
 *         0 - not present
 */
int break_loop(int *ptr, int num)
{
	int i;

	for (i = 0; ptr[i]; i++)
	{
		if (num == ptr[i])
		{
			return  (1);
		}
	}
	return (0);
}

/**
 * print_listint_safe - Prints linked list
 * @head: Head node of linked list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int arr[100] = {0}, i = 0;
	size_t n = 0;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		if (break_loop(arr, head->n))
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (n);
			exit(98);
		}
		else
		{
			printf("[%p] %d\n", (void *)head, head->n);
			arr[i] = head->n;
			n++;
			i++;
			head = head->next;
		}
	}
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
