#include "lists.h"

/**
 * pop_listint - deletes the head node and retuns head nodes data
 * @head: listint_t
 *
 * Return: the int stored in head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;

	free(tmp);

	return (n);
}
