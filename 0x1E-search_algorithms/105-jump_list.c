/*
 * Project file: 105-jump_list.c
 */

#include "search_algos.h"

/**
 * jump_list - a function that searches for sorted linked list of integers
 * @list : A pointer to the head of the linked list to be searched
 * @size: the size of the nodes in the list
 * @value: The value to be searched for
 *
 * Return: if value is present, return pointer to the first node where value is
 *         stored, else NULL if value is not present or head is null
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = 0;
	size_t step_size = sqrt(size);
	listint_t *node, *jump;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	for (node = jump = list; jump->index < size - 1 && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d\n]", jump->index,
		       jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", node->index,
	       jump->index);
	for (; node->index < jump->index && node->n < value; node = node->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index,
		       node->n);
	}
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	if (node->n == value)
		return (node);
	else
		return (NULL);
}
