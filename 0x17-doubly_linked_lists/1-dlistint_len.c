#include "lists.h"

/**
 * dlistint_len - this function count
 * the len of linked list
 *
 * @h: head of linked list
 * Return: num of element in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count ++;
		h = h->next;
	}
	
	return (count);
}
