#include "lists.h"

/**
 * free_dlistint - adds a new node at end of a dlistint_t list
 * @head: Head of a DLL
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
		while (head->prev)
			head = head->prev;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

