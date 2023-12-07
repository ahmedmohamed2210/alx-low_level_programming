#include "lists.h"

/**
 * add_dnodeint - function that add node at the
 * beginning of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (*head != NULL)
	{
		while(h->prev !=NULL)
			h = h->prev;
	}
	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
