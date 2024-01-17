#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: the list
 *
 * Return: len of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t el_num;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	for (el_num = 0; h != NULL; el_num++)
	{
		h = h->next;
	}

	return (el_num);
}
