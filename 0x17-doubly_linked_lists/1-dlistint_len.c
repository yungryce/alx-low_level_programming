#include "lists.h"

/**
 * dlistint_len - Returns node count of DLL
 * @h: DLL node head
 *
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	int count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}
