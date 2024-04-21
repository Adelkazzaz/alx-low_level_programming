#include "lists.h"

/**
 * print_dll - print all the elements of a Dll
 * @h: pointer to head of the dll
 * return: number of nodes of dll 
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	dlistint_t *i;

	if (!h)
		return (size);

	printf("%d\n", h->n);
	size++;
	i = h->next;

	while (i != NULL)
	{
		printf("%d\n", i->n);
		size++;
		i = i->next;
	}
	return (size);
}
