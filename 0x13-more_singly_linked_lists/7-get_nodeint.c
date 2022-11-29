#include "lists.h"

/**
 * get_nodeint_at_index - Function the retunrs the nth node of a linked list
 * @head: Start point of a linked list
 * @index: Index of the node
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
