#include "lists.h"

/**
 * sum_dlistint - Sum of all the data
 * @head: Pointer to linked list
 *
 * Return: Sum of data in linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
