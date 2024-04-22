#include "lists.h"

/**
* print_dlistint - number of the elements of a dlistint_t list
* @h: pointer to head of the dlistint_t list
* Return: number of nodes of dlistint_t list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	dlistint_t *i;

	if (!h)
		return (size);

	size++;
	i = h->next;

	while (i != NULL)
	{
		size++;
		i = i->next;
	}

	return (size);
}
