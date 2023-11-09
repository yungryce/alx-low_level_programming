#include "lists.h"

/**
 * print_dlistint - Prints data of DLL
 * @h: Head of DLL
 *
 * Return: Node count
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t count = 0;

	if (!head)
		return (count);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		printf("%d\n", head->n);

		head = head->next;
		count++;
	}

	return (count);
}
