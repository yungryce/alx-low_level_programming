#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: node pointer to linked list
 * @n: member 1 element of listint_t
 * Return: pointer to new nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->next = *head;
	ptr->n = n;
	*head = ptr;

	return (*head);
}
