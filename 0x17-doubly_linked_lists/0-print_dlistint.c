#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t count = 0;

	while (head != NULL)
	{
		if (!head->n)
			printf("0\n");
		else
			printf("%d\n", head->n);

		head = head->next;
		count++;
	}

	return (count);
}
