#include "lists.h"

/**
 * print_listint - prints all elents of a list
 * @h: the list to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; len++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (len);
}
