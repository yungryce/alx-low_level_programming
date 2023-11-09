#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of a dlistint_t list
 * @head: Head of a DLL
 * @n: Data of DLL
 *
 * Return: Head of DLL (New Element address) *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h = *head;

	if (!head)
		return (NULL);

	if (h)
		while (h->next)
			h = h->next;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!h)
		*head = new;
	else
	{
		h->next = new;
		new->prev = h;
		*head = new;
	}

	return (new);
}
