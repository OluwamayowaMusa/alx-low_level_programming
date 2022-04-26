#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of linked list
 * @head: pointer to address of head node
 * @index: index of node to be deleted
 *
 * Return: 1 - if it succeeded
 *        -1 - if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	temp = *head;
	temp1 = *head;
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	while (temp1 != NULL && i < index - 1)
	{
		temp1 = temp1->next;
		i++;
	}
	i = 0;
	while (temp != NULL && i < index + 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp1 == NULL)
		return (-1);
	free(temp1->next);
	temp1->next = temp;
	return (1);

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
	delete_nodeint_at_index(&head, 5);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	printf("------------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
	return (0);
}
