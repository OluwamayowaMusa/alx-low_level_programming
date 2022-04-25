#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at index
 * @head: Pointer containing the address of head node
 * @idx: index of list of where the new node should be inserted
 * @n: data in new node
 *
 * Return: address of new node
 *       - NULL if failed
 */
listint_t  *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp1;
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (*head == NULL && idx > 0)
		return (NULL);
	temp = *head;
	temp1 = *head;
	while (temp1 != NULL && i < idx - 1)
	{
		temp1 = temp1->next;
		i++;
	}
	i = 0;
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = temp;
	temp1->next = newNode;
	return (newNode);
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
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	printf("------------------\n");
	insert_nodeint_at_index(&head, 5, 4096);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
