/*
 * Project file: 106-linear_skip.c
 */

#include "search_algos.h"

/**
 * linear_skip - a function that searches for sorted linked list of integers
 * @list : A pointer to the head of the linked list to be searched
 * @value: The value to be searched for
 *
 * Return: if value is present, return pointer to the first node where value is
 *         stored, else NULL if value is not present or head is null
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
	{
		return (NULL);
	}

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d\n]",
			       jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
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
