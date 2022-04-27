#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Head node of linked list
 *
 * Return: address of node where loop starts
 *       - NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head, *temp1 = head;

	if (head == NULL)
		return (NULL);
	if (head->next == NULL)
		return (NULL);

	while (temp && temp1->next)
	{
		temp = temp->next;
		temp1 = temp1->next->next;
		if (temp == temp1)
			return (temp);
	}
	return (NULL);
}
