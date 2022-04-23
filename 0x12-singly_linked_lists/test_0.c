#include "lists.h"
#include <string.h>

/**
 * print_list - Prints all the elements of the input list
 * @h: Pointer to struct list_t
 *
 * Return: the number of nodes (linked list)
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	printf("[%u] %s\n", h->len, h->str);
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
	n = print_list(head);
	printf("-> %lu elements\n", n);

	printf("\n");
	free(new->str);
	new->str = NULL;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	free(new);
	return (0);
}
