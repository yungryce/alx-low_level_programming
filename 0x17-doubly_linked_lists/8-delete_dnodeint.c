#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a DLL
 * @head: head of the list
 * @index: index of the new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	if (!head || !(*head))
		return (-1);

	while (current->prev)
		current = current->prev;

	if (index == 0)
	{
		if (current->next)
			current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (!current || i != index)
		return (-1);

	if (current->next && current->prev)
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
	}

	if (!current->prev)
		current->next->prev = NULL;
	if (!current->next)
		current->prev->next = NULL;

	free(current);
	return (1);
}
