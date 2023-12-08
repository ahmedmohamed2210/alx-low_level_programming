#include "lists.h"

/**
 * sum_dlistint - this function find
 * the sum of nodes data
 *
 * @head: head of the list
 * Return: the sum of nodes data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head->prev != NULL)
		head = head->prev;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
