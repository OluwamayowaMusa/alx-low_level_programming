#include   "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: Pointer that contains the address of head node
 * @n: data in linked list
 *
 * Return: Address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

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
	add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint(head);
	return (0);
}
