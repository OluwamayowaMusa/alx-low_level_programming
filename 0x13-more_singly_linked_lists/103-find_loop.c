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
	int arr[200] = {0};
	int i, index = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		for (i = 0; arr[i]; i++)
		{
			if (head->n == arr[i])
			{
				return (head);
			}
		}
		arr[index] = head->n;
		head = head->next;
		index++;
	}
	return (NULL);
}
