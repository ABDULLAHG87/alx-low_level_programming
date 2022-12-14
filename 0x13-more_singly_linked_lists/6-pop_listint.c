#include "lists.h"

/**
 * pop_listint - Function that deletes the head node
 * @head: head node of a list
 * Return: n
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
		return (n);
	}
	return (0);
}
