#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @index: index of the node that should be deleted.
 * @head: node pointer
 * Return: 1=succeed -1=fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new;
	unsigned int i;

	temp = *head;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
	}

	new = temp->next;
	temp->next = new->next;
	free(new);

	return (1);
}
