#include "lists.h"

/**
 * listint_len - Function that returns numbers elements in Linked list
 * @h: head of the linkedlist
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
