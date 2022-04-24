#include "lists.h"
#include <string.h>

/**
 * _strlen - Length of string
 * @s: string passed
 *
 * Return: Length
 */
U_I _strlen(const char *s)
{
	U_I i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: pointer to address of the end of list_t list
 * @str: string to be added
 *
 * Return: the address of the new element
 *        - NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *h;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		(*head) = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = _strlen(str);
		(*head)->next = NULL;
		return (*head);
	}
	h = *head;
	while (h->next != NULL)
		h = h->next;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;
	h->next = newNode;
	return (newNode);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Anne");
	add_node_end(&head, "Colton");
	add_node_end(&head, "Corbin");
	add_node_end(&head, "Daniel");
	add_node_end(&head, "Swati");
	add_node_end(&head, "Timothy");
	add_node_end(&head, "Victor");
	add_node_end(&head, "Walton");
	print_list(head);
	return (0);
}
