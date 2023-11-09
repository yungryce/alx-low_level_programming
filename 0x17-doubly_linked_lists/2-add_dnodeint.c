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

	if (!head)
		return (NULL);

	if (*head)
		while ((*head)->prev)
			*head = (*head)->prev;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (!*head)
		new->next = NULL;
	else
	{
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;
	return (new);
}
