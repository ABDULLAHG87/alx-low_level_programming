#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t
 * @head: Heade of a Linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
