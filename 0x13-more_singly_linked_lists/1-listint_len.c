#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: the linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
