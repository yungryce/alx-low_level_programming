#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *		and returns the head node’s data (n).
 * @head: node pointer
 * Return: 0 for empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	*head = temp->next;
	return (temp->n);
	free(temp);

}
