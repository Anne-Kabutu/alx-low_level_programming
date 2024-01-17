#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: the list to print
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_node;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h->prev != NULL)
			h = h->prev;

		for (num_node = 0; h != NULL; num_node++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (num_node);
}
