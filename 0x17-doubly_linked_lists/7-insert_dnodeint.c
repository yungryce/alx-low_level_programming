#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;
	dlistint_t *new;
	unsigned int i;

	if (!h)
		return (NULL);
	if (node)
		while (node->prev)
			node = node->prev;
	for (i = 0; node != NULL && i < idx; i++)
		node = node->next;
	if (i != idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (node)
	{
		if (idx == 0)
		{
			new->next = node;
			node = new;
			return (new);
		}
		else
		{
			new->prev = node->prev;
			node->prev = new;
			new->next = node;

			if (new->prev)
				new->prev->next = new;
			return (new);
		}
	}
	return (NULL);
}

