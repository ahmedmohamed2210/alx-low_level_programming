#include "lists.h"

/**
 * free_dlistint - this function free dlistint_t list
 *
 * @head: the head of list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tem);
	}
}
