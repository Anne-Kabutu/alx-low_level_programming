#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: the list to print
 *
 * Return: the list
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		num++;
		h = h->next;
	}

	return (num);
}
