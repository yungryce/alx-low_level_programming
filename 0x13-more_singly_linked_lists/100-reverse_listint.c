#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *begin, *end;

	while (*head)
	{
		end = (*head)->next;
		(*head)->next = begin;
		begin = *head;
		*head = end;
	}

	*head = begin;

	return (*head);
}
