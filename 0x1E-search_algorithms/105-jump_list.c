#include "search_algos.h"
#include <math.h>


/**
 * jump_list - Searches for a value usingJumo Search algorithm
 *
 * @list: Pointer to the head of linked list
 * @size: Number of nodes in list
 * @value: Value to be search for
 *
 * Return: index of value
 *         NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp = list;
	size_t jump, current_index = 0, index = 0;

	if (!list)
		return (NULL);

	jump = (size_t)sqrt(size);
	while (value > tmp->n && current_index < size)
	{
		current_index += jump;
		if (current_index >= size)
			current_index = size - 1;
		while (index < current_index)
			tmp = tmp->next, index++;
		printf("Value checked at index [%ld] = [%d]\n", current_index, tmp->n);
		if (current_index == size - 1)
			break;
	}
	index = 0, tmp = list;
	while (index < current_index - jump)
		tmp = tmp->next, index++;
	if (current_index == size - 1)
		index++;
	printf("Value found between indexes [%ld] and [%ld]\n", index, current_index);
	for (; index <= current_index; index++, tmp = tmp->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", index, tmp->n);
		if (value == tmp->n)
			return (tmp);
	}
	return (NULL);
}
