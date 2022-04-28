#include "lists.h"

/**
 * check_num - check number in array
 * @ptr: pointer to an array
 * @num: Number to be checked
 *
 * Return: 1 - Number present
 *         0 - Not present
 */
int check_num(int *ptr, int num)
{
	int i = 0;

	for (i = 0; ptr[i]; i++)
	{
		if (num == ptr[i])
		{
			return (1);
		}
	}
	return (0);
}


/**
 * loop_break - number of nodes before loop
 * @head: Head node of linked list
 *
 * Return: 1 - Number present
 *         0 - Not present
 */
int loop_break(listint_t *head)
{
	int arr[200] = {0}, i = 0;

	while (head != NULL)
	{
		if (check_num(arr, head->n))
		{
			return (i);
		}
		else
		{
			arr[i] = head->n;
			i++;
			head = head->next;
		}
	}
	return (i);
}


/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the address of head node
 *
 * Return: Size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	int i, index;
	size_t n;
	listint_t *temp, *temp1;

	if (h == NULL)
		return (0);
	if (*h == NULL)
		return (0);
	n = sizeof(*h);
	temp = *h;
	index = loop_break(*h);
	printf("------\n");
	printf("%d\n", index);
	for ( i = 0; i < index; i++)
	{
		temp1 = temp->next;
		free(temp);
		temp = temp1;
	}
	free(temp);
	*h = NULL;
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
	free_listint_safe(&head2);
	free_listint_safe(&head);
	printf("%p, %p\n", (void *)head2, (void *)head);
	return (0);
}
