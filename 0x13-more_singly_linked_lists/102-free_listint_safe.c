#include "lists.h"

/**
 * check_num - check number in array
 * @ptr: pointer to an array
 * @num: Number to be checked
 *
 * Return: 1 - Number present
 *         0 - Not present
 */
int check_num(int *ptr, int num)
{
	int i = 0;

	for (i = 0; ptr[i]; i++)
	{
		if (num == ptr[i])
		{
			return (1);
		}
	}
	return (0);
}


/**
 * loop_break - number of nodes before loop
 * @head: Head node of linked list
 *
 * Return: 1 - Number present
 *         0 - Not present
 */
int loop_break(listint_t *head)
{
	int arr[200] = {0}, i = 0;

	while (head != NULL)
	{
		if (check_num(arr, head->n))
		{
			return (i);
		}
		else
		{
			arr[i] = head->n;
			i++;
			head = head->next;
		}
	}
	return (i);
}


/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the address of head node
 *
 * Return: Size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	int i, index;
	size_t n;
	listint_t *temp, *temp1;

	if (h == NULL)
		return (0);
	if (*h == NULL)
		return (0);
	n = sizeof(*h);
	temp = *h;
	index = loop_break(*h);
	printf("------\n");
	printf("%d\n", index);
	for (i = 0; i < index; i++)
	{
		temp1 = temp->next;
		free(temp);
		temp = temp1;
	}
	free(temp);
	*h = NULL;
	return (n);
}
