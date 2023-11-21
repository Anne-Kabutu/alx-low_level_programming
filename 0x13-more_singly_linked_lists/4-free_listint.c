#include "lists.h"

/**
 * free_listint - frees a list
 * @head: list to free
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
