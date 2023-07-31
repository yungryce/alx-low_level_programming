#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: node pointer to a linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *head = h;
	size_t count = 0;

	while (head != NULL)
	{
		printf("%u\n", head->n);
		head = head->next;
		count++;
	}

	return (count);
}
