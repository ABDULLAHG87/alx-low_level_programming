#include "lists.h"

/**
 * free_listint - Function that frees a listint_t
 * @head: Heade of a Linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
