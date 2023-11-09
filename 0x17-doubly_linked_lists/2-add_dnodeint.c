#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: Head of a DLL
 * @n: Data of DLL
 *
 * Return: Head of DLL (New Element address)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h = *head;

	if (!head)
		return (NULL);

	if (h)
		while (h->prev)
			h = h->prev;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (!h)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		h->prev = new;
		new->next = h;
		*head = new;
	}

	return (new);
}
