#include "lists"

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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
	{
		while(*head->prev !=NULL)
			*head = *head->prev;
	}
	new->next = *head;

	if (*head != NULL)
		*head->prev = new;

	*head = new;

	return (new);
}
