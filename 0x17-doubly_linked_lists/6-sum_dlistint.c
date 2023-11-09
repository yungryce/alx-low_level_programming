#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) in DLL
 *
 * @head: head of DLL
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head)
		while (head->prev)
			head = head->prev;
	else
		return (0);

	while (head)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}
