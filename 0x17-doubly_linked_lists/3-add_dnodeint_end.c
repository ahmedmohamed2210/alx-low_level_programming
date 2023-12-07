#include "lists.h"

/**
 * add_dnodeint_end - this function add node
 * to the end of linked list
 *
 * @head: head of list
 * @n: data of node
 * Return: the address of added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new
	dlistint_t *h

	new = malloc(sizeof(dlistint_t);
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
	}

	new->prev = h;

	if (h != NULL)
		h->next = new;

	return (new);
}
