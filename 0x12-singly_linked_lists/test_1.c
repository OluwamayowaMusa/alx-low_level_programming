#include "lists.h"
#include <string.h>

/**
 * list_len - Number the elements of the input list
 * @h: Pointer to struct list_t
 *
 * Return: the number of nodes (linked list)
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	i++;

	return (i);
}

/**
 * main - test function
 *
 * Return: 0
 */
int main(void)
{
	list_t *head;
	list_t *new;
	list_t test = {"Musa", 4, NULL};
	list_t hello = {"World", 5, &test};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = list_len(head);
	printf("-> %lu elements\n", n);

	printf("\n");
	free(new->str);
	free(new);
	return (0);
}
