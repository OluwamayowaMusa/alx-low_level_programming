#include "lists.h"
#include <string.h>

/**
 * _strlen - Returns length of string
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
 * add_node - Adds a new node to the beginning of the list_t list
 * @head: pointer to the address of the head of list_t list
 * @str: String to be added to new node;
 *
 * Return: A pointer to the new element
 *         - NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = head;

	return (newNode);
}
