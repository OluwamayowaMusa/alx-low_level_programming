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
	listint_t *temp, *temp1;

	if (head == NULL)
		return (NULL);
	temp = head->next;
	temp1 = (head->next)->next;
	while (temp1)
	{
		if (temp1 == temp)
		{
			temp = head;
			while (temp != temp1)
			{
				temp = temp->next;
				temp1 = temp1->next;
			}
			return (temp);
		}
		temp = temp->next;
		temp1 = (temp1->next)->next;
	}
	return (NULL);
}
