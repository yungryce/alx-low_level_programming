#include "lists.h"

/**
 * get_dnodeint_at_index - finds a specific node of DLL
 * @head: pointer to the beginning of DLL
 * @index: index of the node to retrieve
 *
 * Return: pointer to the indexed node, or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head)
		while (head->prev)
			head = head->prev;
	else
		return (NULL);

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
