#include "lists.h"

/**
 * print_dlistint - 
 * @h: Head of DLL
 *
 * Return: Node count
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t count = 0;

	while (head->prev)
		head = head->prev

	while (head != NULL)
	{
		printf("%d\n", head->n);

		head = head->next;
		count++;
	}

	return (count);
}
