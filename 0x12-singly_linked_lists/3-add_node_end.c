#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to address of fuction type list_t
 * @str: char string to add to list_t node
 * Return: address of new element or null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new, *temp = NULL;

	for (i = 0; str[i]; i++)
		;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
