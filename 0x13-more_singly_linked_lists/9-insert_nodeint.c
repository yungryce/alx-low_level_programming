#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: node pointer
 * @idx: position to be added
 * @n: member 1 of list
 * Return: pointer to node at index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !*head || !temp)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
		temp = temp->next;

	new->next = temp->next;
	temp->next = new;

	return (new);
}
