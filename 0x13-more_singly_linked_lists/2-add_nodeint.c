#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning
 * @head: Pointer to the Head of a Linked list
 * @n: Value of the Data
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);	
	}
	return (NULL);
}
