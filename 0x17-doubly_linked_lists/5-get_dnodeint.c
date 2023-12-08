#include "lists.h"

/**
 * get_dnodeint_at_index - this function return the
 * nth of the node in list
 *
 * @head: the head of the list
 * @index: the nth of node
 * Return: node with nth index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
