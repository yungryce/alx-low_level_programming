#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to addrest of function type list_t
 * @str: char string to add to list_t
 * Return: address of new element. Null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *new = NULL;

	for (i = 0; str[i]; i++)
		;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
