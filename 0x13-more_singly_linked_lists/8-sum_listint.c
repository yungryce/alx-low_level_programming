#include "lists.h"

/**
 * sum_listint - returns sum of all data of a linked list.
 * @head: node pointer
 *
 * Return: sum of all head->n
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
