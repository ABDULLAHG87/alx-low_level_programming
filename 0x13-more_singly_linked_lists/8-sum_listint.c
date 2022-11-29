#include "lists.h"

/**
 * sum_listint - Function that returns sum of all data
 * @head: Head of the linked list
 * Return: sum;
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (-1);
	}
	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
}
