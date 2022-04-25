#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of linked list
 * @head: Pointer to head node
 * @index: Index of node
 *
 * Return: The nth node of a linked list
 *       - NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	if (index == 0)
	{
		return (temp);
	}
	while (temp != NULL && i <= index - 1)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	listint_t *head;
	listint_t *node;

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
	node = get_nodeint_at_index(head, 0);
	if (node == NULL)
	{
		printf("Error\n");
		return (1);
	}
	printf("->%d\n", node->n);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
