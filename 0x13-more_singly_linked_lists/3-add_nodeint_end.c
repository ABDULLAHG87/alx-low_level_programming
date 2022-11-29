#include "lists.h"

/**
 * add_nodeint_end - Function that adds Element to the end of a linked list
 * @head: Head or start of a linked list
 * @n: Value to be added to a linked list
 * Return: Address of new linked node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *curr;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			curr = *head;
			while (curr->next != NULL)
			{
				curr = curr->next;
			}
			curr->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
