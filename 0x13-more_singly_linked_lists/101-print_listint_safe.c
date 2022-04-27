#include "lists.h"

/**
 * break_loop - check is number is in array;
 * @ptr: Pointer to an array
 * @num: Number to be checked
 *
 * Return: 1 - Number present
 *         0 - not present
 */
int break_loop(int *ptr, int num)
{
	int i;

	for (i = 0; ptr[i]; i++)
	{
		if (num == ptr[i])
		{
			return  (1);
		}
	}
	return (0);
}

/**
 * print_listint_safe - Prints linked list
 * @head: Head node of linked list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int arr[100] = {0}, i = 0;
	size_t n = 0;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		if (break_loop(arr, head->n))
		{
			printf("-> [%p] %d\n", (void *)(&(head->n)), head->n);
			exit(98);
		}
		else
		{
			printf("[%p] %d\n", (void *)(&(head->n)), head->n);
			arr[i] = head->n;
			n++;
			i++;
			head = head->next;
		}
	}
	return (n);
}
